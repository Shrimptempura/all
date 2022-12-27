// 리스트를 역순으로 만드는 연산

/*
세 개의 포인터 p, q, r을 이용하여 연결 리스트를 순회하면서 링크의 방향을 역순으로 바꾼다.
새로운 연결 리스트를 만들지 않고, 3개의 포인터를 사용하여 현재의 연결 리스트 안에서 문제 해결
주의점) 링크의 방향을 역순으로 바꾸기 전에 미리 뒤의 노드를 알아놓아야한다.
p는 역순으로 만들 리스트이고 q는 현재 역순으로 만들 노드를 가리키며, r은 이미 역순으로 변경된
리스트를 가리킨다. r은 q, q는 p를 차례로 따라간다.

ListNode *reverse(ListNode *head)
{
    // 순회 포인터로 p, q, r을 사용
    ListNode *p, *q, *r;

    p = head;       // p는 역순으로 만들 리스트
    q = NULL;       // q는 역순으로 만들 노드
    while (p != NULL) {
        r = q;      // r은 역순으로 된 리스트
                    // r은 q, q는 p를 차례로 따라간다.
        q = p;
        p = p->link;
        q->link = r;    //  q의 링크 방향을 바꾼다.
    }
    return q;
} */

#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode {
    element data;
    struct ListNode *link;
} ListNode;

ListNode *insert_first(ListNode *head, element value)
{
    ListNode *p = (ListNode *)malloc(sizeof(ListNode));     // (1)
    p->data = value;        // (3)
    p->link = head;         // 헤드 포인터의 값을 복사 (3)
    head = p;               // 헤드 포인터 변경 (4)

    return head;
}

void print_list(ListNode *head)
{
    for (ListNode *p = head; p != NULL; p = p->link)
        printf("%d->", p->data);
    printf("NULL \n");
}

ListNode *reverse(ListNode *head)
{
    // 순회 포인터로 p, q, r을 사용
    ListNode *p, *q, *r;

    p = head;       // p는 역순으로 만들 리스트
    q = NULL;       // q는 역순으로 만들 노드
    while (p != NULL) {
        r = q;      // r은 역순으로 된 리스트
                    // r은 q, q는 p를 차례로 따라간다.
        q = p;
        p = p->link;
        q->link = r;    //  q의 링크 방향을 바꾼다.
    }
    return q;
}

int main(void)
{
    ListNode *head1 = NULL;
    ListNode *head2 = NULL;

    head1 = insert_first(head1, 10);
    head1 = insert_first(head1, 20);
    head1 = insert_first(head1, 30);
    print_list(head1);

    head2 = reverse(head1);
    print_list(head2);

    return 0;
}