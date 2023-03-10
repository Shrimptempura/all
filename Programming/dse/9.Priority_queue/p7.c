/* 허프만 코드
데이터 압축, 아스키 코드 사용 x
빈도수(frequencies)

각 글자의 빈도수에 따라서 가장 많이 등장하는 글자에는 짧은 비트열을 사용하고
잘 나오지 않는 글자에는 긴 비트열을 사용하여 전체의 크기를 줄이자는 것
ex) 가장 많이 등장 e : 2비트 사용,  가장 적게 등장 z :  15비트 사용
ex)
글자 : 빈도수
    e : 15
    t : 12
    n : 8
    i : 6
    s : 4

텍스트의 길이가 45글자이므로 한 글자를 3비트로 표시하는 아스키코드인 경우 45 * 3비트 / 글자 =
135비트 필요,   가변 길이의 코드를 만들어서 사용한 경우
15 * 2 + 12 * 2 + 8 * 2 + 6 * 3 + 4 * 3 = 88비트 필요

물론 각각의 글자를 어떤 비트 코드로 표현 했는지 알려주는 테이블이 있어야 한다.

글자    코드    코드길이    빈도수      비트수
e       00      2           15          15*2
t       01      2           12          12*2
n       11      2           8           8*2
i       100     3           6           6*3
s       101     3           4           3*4




글자를 나타내는 비트열은 서로 간에 혼동을 일으키지 않아야 한다.
해결해야 될 문제는 압축 해야할 텍스트가 주어졌을때 어떻게 그러한 비트 코드를 자동으로 생성할
것인가와 압축된 텍스트가 주어져 있을 때 어떻게 복원할 것인가가 문제이다.

해독의 경우, 만약 한 글자당 3비트가 할당되면 메시지를 해독하는 것은 아주 쉽다.
메시지를 3비트씩 끊어서 읽으면 된다.

만약 가변길이 코드가 사용되었을 경우 어떻게 읽을까?
teen의 경우, 가변코드를 사용하여 코딩하면 01000010 이다.
어떻게 읽어서 해독해야 할까?

첫 글자인 경우 하나의 글자가 3비트까지 가느아므로 0, 01, 010 중 하나이다.

코드 테이블을 보면 0이나 010인 코드는 없기 때문에 첫번째 글자는 01이 분명하고 01은 t이다.
또 다음 코드는 0, 00, 000 중의 하나이다. 그러나 같은 이유로 다음 코드는 00이 된다.
따라서 e이다. 이런식으로 계속 진행하면 teen이라고 하는 원문을 추출할 수 있다.

이러한 해독과장이 가능하게 된 원인은 코드를 관찰하여 보면 모든 코드가 다른 코드의 첫부분이 
아니라는 것이다.
따라서 코딩된 비트열을 왼쪽에서 오른쪼그로 조사하여 보면 정확히 하나의 코드만 일치하는
것을 알 수 있다.

이러한 특수한 코드를 만들기 위하여 이진 트리를 사용할 수 있다.
이러한 종류의 코드를 호프만 코드(Huffman codes)라고 한다.


먼저 빈도수에 따라 5개의 글자를 나열하고 (s(4), i(6), n(8), t(12), e(15))
여기서 가장 작은 빈도수를 가지는 글자 2개 (s(4), i(6))를 추출하여 이들을
단말 노드로 하여 이진 트리를 구성한다.
루트의 값은 각 자식노드의 값을 합한 값이 된다.

정렬된 글자들의 리스트로 동라가서 이 합쳐진 값을 글자들의 리스트에 삽입하여
(10, 8, 12, 15)를 얻는다. 이 빈도수를 정렬하여 (8, 10, 12, 15)를 얻을 수 있고
다시 이중에서 가장 작은 값 2개를 단말 노드로 하여 다음과 같이 이진트리를 구성한다.

    10
4       6   8   12  15

        18
            10
8       4       6       12      15

다시 글자들의 정렬된 리스트로 돌아가서 이 합쳐진 값을 글자들의 리스트에 삽입하여
(12, 15, 18)을 얻는다. 다시 이중에서 가장 작은 값 2개를 단말노드로 하여 다음과 같은
이진트리를 구성한다.

        18
            10              27
8       4       6       12      15

같은 식으로 하여 (18, 27)이 되고 이 두 값을 단말노드로 하여 이진 트리를 구성하면
다음과 같이 된다. 이 허프만 트리에서 왼쪽 간선은 비트 1을 나타내고 오른쪽 간선은 비트0을 나타낸다.

                45
            18(1)
                    10(0)               27(0)
        8(1)    4(1)    6(0)        12(1)       15(0)

이렇게 이진 트리를 구성하였으면 각 글자에 대한 허프만 코드는 단순히 루트 노드에서
단말 노드까지의 경로에 있는 간선의 레벨값을 읽으면 된다. 즉 빈도수 6에 해당하는 글자인 i의
코드는 110이 된다.

허프만 코드 알고리즘에서 가장 작은 2개의 빈도수를 얻는 과정이 있다.
이것은 힙트리를 이용하면 가장 효율적으로 구성될 수 있다. 여기서는 최소 힙을 이용해야 한다.
따라서 힙 트리 코드를 약간 변경하였다.

다음의 프로그램은 먼저 각 빈도수를 단일 노드로 만든 다음에 가장 작은 빈도수를 갖는
노드 2개를 합쳐서 하나의 트리로 만드는 과정을 되풀이 한다.

힙에 저장되는 element 타입은 구조체로서 트리를 가리키는 포인터와 그 트리의 weight 값을
key값으로 가진다. 우선 순위는 바로 이 트리의 weight값에 의해 결정된다.

make_tree 함수는 매개변수로 받은 포인터들을 왼쪽 자식과 오른쪽 자식으로 하는 루트 노드를
만들어서 반환한다. 제일 작은 값 두개를 꺼내어 합치는 for 루프는 n - 1번만 수행된다.
마지막에 남은 노드가 전체 이진 트리의 루트가 되고 이 이진트리로부터 허프만 코드를 할당할수 있다.
*/