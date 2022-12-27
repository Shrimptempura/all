// 특정한 값을 탐색하는 함수 작성

/*
리스트에서 특정 값을 탐색하는 연산도 기본적인 연산이다. 
먼저 헤드 포인터가 가리키는 노드부터 순서대로 링크를 따라가면서 노드가 저장하고 있는
데이터와 찾는 값을 비교한다. 링크값이 NULL이면 연결리스트 끝에 도달한 것이므로 탐색 종료
반환값은 탐색값을 가지고 있는 노드의 주소

<노드값 탐색 알고리즘>
ListNode *search_list(ListNode *head, element x)
{
    ListNode *p = head;

    while (p != NULL) {
        if (p->data == x) return p;
        p = p->link;
    }
} return NULL;  탐색 실패
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
    p->data = value;        // (2)
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

ListNode *search_list(ListNode *head, element x)
{
    ListNode *p = head;

    while (p != NULL) {
        if (p->data == x) return p;
        p = p->link;
    }
    return NULL;      // 탐색 실패
}

int main(void)
{
    ListNode *head = NULL;

    head = insert_first(head, 10);
    print_list(head);
    head = insert_first(head, 20);
    print_list(head);
    head = insert_first(head, 30);
    print_list(head);
    if (search_list(head, 30) != NULL)
        printf("리스트에서 30을 찾았습니다. \n");
    else
        printf("리스트에서 30을 찾지 못했습니다. \n");
    
    return 0;
}