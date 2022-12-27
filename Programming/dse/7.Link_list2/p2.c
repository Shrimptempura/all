// 원형 리스트의 장점이 있지만 마지막 노드의 링크가 NULL이 아니기 때문에 리스트의 
// 끝을 도달했는지 검사하려면 헤드 포인터와 비교하여야 한다. 또한 while 루프 대신
// do-while 루프를 써야 함을 유의하라

// 원형 연결 리스트 테스트 프로그램
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode {
    element data;
    struct ListNode *link;
} ListNode;

void print_list(ListNode *head)
{
    ListNode *p;

    if (head == NULL) return;
    p = head->link;
    do {
        printf("%d->", p->data);
        p = p->link;
    } while (p != head);
    printf("%d->", p->data);    // 마지막 노드 출력
}

ListNode *insert_first(ListNode *head, element data)
{
    ListNode *node = (ListNode *)malloc(sizeof(ListNode));
    node->data = data;
    if (head == NULL) {
        head = node;
        node->link = head;
    } 
    else {
        node->link = head->link;    // (1)
        head->link = node;          // (2)
    }
    return head;    // 변경된 헤드 포인터를 반환한다.
}

ListNode *insert_last(ListNode *head, element data)
{
    ListNode *node = (ListNode *)malloc(sizeof(ListNode));
    node->data = data;
    if (head == NULL) {
        head = node;
        node->link = head;
    }
    else {
        node->link = head->link;    // (1)
        head->link = node;          // (2)
        head = node;                // (3)
    }
    return head;    // 변경된 헤드 포인터를 반한한다.
}

// 원형 연결 리스트 테스트 프로그램
int main(void)
{
    ListNode *head = NULL;

    // list = 10->20->30->40
    head = insert_last(head, 20);   // insert_last()가 반환된 헤드 포인터를 head에 대입한다.
    head = insert_last(head, 30);
    head = insert_last(head, 40);
    head = insert_first(head, 10);
    print_list(head);

    return 0;
}