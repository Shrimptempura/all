// 단어들을 저장하는 연결 리스트

/*
element를 배열을 포함하고 있는 구조체로 정의
typedef struct {
    char name[100];
} element;

print_list() 함수도 데이터 필드에 저장된 문자열을 출력하도록 수정
void print_list(ListNode *head)
{
    for (ListNode *p = head; p != NULL; p = p->link)
        printf("%s->", p->data.name);
    printf("NULL \n");
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
} element;

typedef struct ListNode {
    element data;
    struct ListNode *link;
} ListNode;

void error(char *message)
{
    fprintf(stderr, "%s\n", message);
    EXIT_FAILURE;
}

ListNode *insert_first(ListNode *head, element value)
{
    ListNode *p = (ListNode *)malloc(sizeof(ListNode));     // (1)
    p->data = value;    // (2)
    p->link = head;     // 헤드 포인터의 값을 복사 (3)
    head = p;           // 헤드 포인터 변경 (4)

    return head;
}

void print_list(ListNode *head)
{
    for (ListNode *p = head; p != NULL; p = p->link)
        printf("%s->", p->data.name);
    printf("NULL \n");
}

int main(void)
{
    ListNode *head = NULL;
    element data;

    strcpy(data.name, "APPLE");
    head = insert_first(head, data);
    print_list(head);

    strcpy(data.name, "KIWI");
    head = insert_first(head, data);
    print_list(head);

    strcpy(data.name, "BANANA");
    head = insert_first(head, data);
    print_list(head);

    return 0;
}