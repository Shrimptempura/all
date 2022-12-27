/*
원형 연결 리스트는 어디에 사용될까?
1) 컴퓨터에서 여러 응용 프로그램을 하나의 CPU를 이용하여 실행
2) 멀티플레이어 게임
3) 원형 큐를 만드는데 사용

멀티플레이어 게임 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char element[100];
typedef struct ListNode {
    element data;
    struct ListNode *link;
} ListNode;

ListNode *insert_first(ListNode *head, element data)
{
    ListNode *node = (ListNode *)malloc(sizeof(ListNode));
    strcpy(node->data, data);
    if (head == NULL) {
        head = node;
        node->link = head;
    }
    else {
        node->link = head->link;    // (1)
        head->link = node;          // (2)
    }
    return head;    // 헤드 포인터를 반환한다.
}

// 원형 연결 리스트 테스트 프로그램
int main(void)
{
    ListNode *head = NULL;

    head = insert_first(head, "KIM");
    head = insert_first(head, "PARK");
    head = insert_first(head, "CHOI");

        ListNode *p = head;
    for (int i = 0; i < 10; i++) {
        printf("현재 차례 = %s \n", p->data);
        p = p->link;
    }
    return 0;
}