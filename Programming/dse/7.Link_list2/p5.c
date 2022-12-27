typedef int element;
typedef struct DListNode {
    element data;
    struct DListNode *llink;
    struct DListNode *rlink;
} DListNode;
/* 삽입연산
새로 만들어진 노드의 링크를 먼저 바꾼다. 새로 만들어진 노드의 링크는 아무런 정보를
가지고 있지 않기 때문에 변경하여도 안전하기 때문이다. */

// 이중 연결 리스트에서의 삽입함수
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

// 이중 연결 리스트에서의 삭제함수
// 노드 removed를 삭제한다.
void ddelete(DListNode *head, DListNode *removed)
{
    if (removed == head) return;
    removed->llink->rlink = removed->rlink;
    removed->rlink->llink = removed->llink;
    free(removed);
}

