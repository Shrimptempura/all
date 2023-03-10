/*
연결 리스트의 응용 : 다항식
다항식을 단순 연결 리스트로 표현 가능한데 각 항을 하나의 노드로 표현해보자
각 노드는 계수(coef)와 지수(exp) 그리고 다음 항을 가리키는 링크(link) 필드로 구성되어 있다.

typedef struct ListNode {
    int coef;
    int expon;
    struct ListNode *link;
} ListNode;

[coef][expon][link] : 다항식에서의 노드의 구조

각 다항식은 다항식의 첫 번째 항을 가리키는 포인터로 표현된다.
ListNode *A, *B;

ex) A(x) = 3x^12 + 2x^8 + 1,        B(x) = 8x^12 - 3x^10 + 10x^6
A -> [3][12][] -> [2][8][] -> [1][0][NULL]
B -> [8][12][] -> [-3][10][] -> [10][6][NULL]

<2개의 다항식을 더하는 덧셈 연산>
다항식이 연결리스트로 표현되어 있기 때문에 포인터 변수 p와 q를 이용하여
다항식 A와 B의 항들을 따라 순회하면서 각 항들을 더하면 된다. p와 q가 가리키는 항의 지수에 따라
3가지 경우로 나누어 처리할 수 있다.

1) p.expon == q.expon :
    두 계수를 더해서 0이 아니면 새로운 항을 만들어 결과 다항식 C에 추가한다.
    그리고 p와 q는 모두 다음 항으로 이동한다.

2) p.expon < q.expon :
    q가 지시하는 항을 새로운 항으로 복사하여 결과 다항식 C에 추가한다. 
    그리고 q만 다음 항으로 이동한다.

3) p.expon > q.expon :
    p가 지시하는 항을 새로운 항으로 복사하여 결과 다항식 C에 추가한다.
    그리고 p만 다음 항으로 이동한다.


헤더노드 : [길이][헤드][테일]
*/