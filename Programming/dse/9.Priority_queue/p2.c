/* 힙
힙은 여러 개이 값들 중에서 가장 큰 값이나 가장 작은 값을 빠르게 찾아내도록 만들어진 자료구조

부모 노드의 키 값이 자식 노드의 키 값보다 큰 이진 트리
key(부모노드) >= key(자식노드)          힙트리에서는 중복된 값을 허용함, 이진 탐색 트리는 허용x

힙 안에서 데이터들은 느슨한 정렬 상태를 유지
즉 큰 값이 상위 레벨, 작은 값이 하우 레벨
힙의 목적은 삭제 연산이 수행될 때마다 가장 큰 값을 찾아내기만 하는 것(가장 큰 값은 루트 노드)
따라서 전체를 정렬할 필요는 없다.

힙은 완전 이진 트리(complete binary tree)

<힙의 종류>
1. 부모 노드의 키 값이 자식 노드보다 큰 최대 힙(max heap)
2. 노드의 키 값이 자식 노드보다 작은 최소 힙(min heap)

두 가지의 힙은 단지 부등호만 달라지고 나머지는 완전 동일

<힙의 구현>
힙은 완전 이진 트리이기 때문에 각각의 노드에 차례대로 번호를 붙일 수 있다.
이 번호를 배열의 인덱스로 생각하면 배열에 힙의 노드들을 저장할 수 있다.
따라서 힙을 저장하는 표준적인 자료구조는 배열이다.
프로그램 구현을 쉽게 하기 위해 배열의 첫 번째 인덱스인 0은 사용되지 않는다.

- 왼쪽 자식의 인덱스 = (부모의 인덱스) * 2
- 오른쪽 자식의 인덱스 = (부모의 인덱스) * 2 + 1

- 부모의 인덱스 = (자식의 인덱스) / 2

<힙의 정의>
힙은 1차원 배열로 표현될 수 있기 때문에 힙의 각 요소들을 구조체 element로 정의하고,
element의 1차원 배열을 만들어 힙을 구현한다. heap_size는 현재 힙 안에 저장된 요소의 개수이다.

#define MAX_ELEMENT 200
typedef struct {
    int key;
} element;
typedef struct {
    element heap[MAX_ELEMENT];
    int heap_size;
} HeapType;

위의 정의를 이용하여 힙 heap를 생성하고 싶으면 다음고 같이 한다.
HeapType heap;

또는 다음과 같이 동적으로 생성할 수도 있다.
HeapType *heap = create();      메모리 동적 할당 이용
*/