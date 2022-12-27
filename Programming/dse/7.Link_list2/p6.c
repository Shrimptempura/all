/* 이중 연결 리스트에선 보통 헤드 노드가 존재하므로 단순 연결 리스트처럼 헤드 포인터가
필요 없다. 즉 헤드 노드만 알고 있으면 어떤 노드로도 접근 할 수 있다.
헤드 노드는 main 함수 안에 변수로 head라는 이름으로 생성되어 있다
head는 포인터 변수가 아니라 구조체 변수임을 유의해라. 또한 이중 연결 리스트는 사용하기 전에
반드시 초기화를 해야 한다. 즉 헤더 노드으 링크필드들이 자기 자신을 가리키도록 초기화를 해야 한다. */

// 이중 연결 리스트에서의 삭제함수
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct DListNode {
    element data;
    struct DListNode *llink;
    struct DListNode *rlink; 
} DListNode;

void init(DListNode *phead)
{
    phead->llink = phead;
    phead->rlink = phead;
}

void print_dlist(DListNode *phead)
{
    DListNode *p;
    for (p = phead->rlink; p != phead; p = p->rlink) {
        printf("<-| |%d| |-> ", p->data);
    }
    printf("\n");
}

// 새로운 데이터를 노드 before의 오른쪽에 삽입한다.
void dinsert(DListNode *before, element data)
{
    DListNode *newnode = (DListNode *)malloc(sizeof(DListNode));
    newnode->data = data;
    newnode->llink = before;
    newnode->rlink = before->rlink;
    before->rlink->llink = newnode;
    before->rlink = newnode;
}

void ddelete(DListNode *head, DListNode *removed)
{
    if (removed == head) return;
    removed->llink->rlink = removed->rlink;
    removed->rlink->llink = removed->llink;
    free(removed);
}

int main(void)
{
    DListNode *head = (DListNode *)malloc(sizeof(DListNode));
    init(head);
    printf("추가 단계\n");
    for (int i = 0; i < 5; i++) {
        // 헤드 노드의 오른쪽에 삽입
        dinsert(head, i);
        print_dlist(head);
    }
    printf("삭제 단계\n");
    for (int i = 0; i < 5; i++) {
        print_dlist(head);
        ddelete(head, head->rlink);
    }
    free(head);
    return 0;
}