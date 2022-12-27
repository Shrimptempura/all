// 두개의 리스트를 하나로 합치는 함수 작성

/*
두 개의 리스트를 합치려면 먼저 첫 번째 리스트의 맨 끝으로 간 다음,
마지막 노드의 링크가 두 번째 리스트의 첫 번째 노드를 가리키도록 변경하면 된다.
주의점은 list1이나 list2가 NULL인 경우를 반드시 처리해야 한다.

ListNode *concat_list(ListNode *head1, ListNode *head2)
{
    if (head1 == NULL) return head2;
    else if (head2 == NULL) return head1;
    else {
        ListNode *p;
        p = head1;
        while (p->link != NULL)
            p = p->link;
        p->link = head2;

        return head1;
    }
}
*/

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
    p->data = value;    // 헤드 포인터의 값을 복사 (2)
    p->link = head;     // 헤드 포인터 변경 (3)
    head = p;           // (4)

    return head;
}

void print_list(ListNode *head)
{
    for (ListNode *p = head; p != NULL; p = p->link)
        printf("%d->", p->data);
    printf("NULL \n");
}

ListNode *concat_list(ListNode *head1, ListNode *head2)
{
    if (head1 == NULL) return head2;
    else if (head2 == NULL) return head1;
    else {
        ListNode *p;
        p = head1;
        while (p->link != NULL)
            p = p->link;
        p->link = head2;

        return head1;
    }
}

int main(void)
{
    ListNode *head1 = NULL;
    ListNode *head2 = NULL;

    head1 = insert_first(head1, 10);
    head1 = insert_first(head1, 20);
    head1 = insert_first(head1, 30);
    print_list(head1);

    head2 = insert_first(head2, 40);
    head2 = insert_first(head2, 50);
    print_list(head2);

    ListNode *total = concat_list(head1, head2);
    print_list(total);

    return 0;
}