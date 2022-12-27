/* 레벨순회
각 노드를 레벨 순으로 검사하는 방법, 큐를 사용하는 순회법

<트리 레벨 순회 알고리즘>
level_order(root):
1. initialize queue;
2. if (root == null) then return;
3. enqueue(queue, root);
4. while is_empty(queue) != TURE do
5.  x <- dequeue(queue);
6.  print x->data;
7.  if (x->left != NULL) then
8.          enqueue(queue, x->left);
9.  if (x->right != NULL) then
10.         enqueue(queue, xx->left);
*/

// 레벨 순회 프로그램, 큐의 요소 타입이 정수가 포인터이므로 element 타입 다시 정의
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TreeNode {
    int data;
    struct TreeNode *left, *right;
} TreeNode;

// 원형큐 코드 시작
#define MAX_QUEUE_SIZE 100
typedef TreeNode *element;
typedef struct {
    element data[MAX_QUEUE_SIZE];
    int front, rear;
} QueueType;

void error(char *meassage)
{
    fprintf(stderr, "%s\n", meassage);
    EXIT_FAILURE;
}

void init_queue(QueueType *q)
{
    q->front = q->rear = 0;
}

int is_empty(QueueType *q)
{
    return (q->front == q->rear);
}

int is_full(QueueType *q)
{
    return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

void enqueue(QueueType *q, element item)
{
    if (is_full(q))
        error("큐가 포화상태입니다");
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->data[q->rear] = item;
}

element dequeue(QueueType *q)
{
    if (is_empty(q))
        error("큐가 공백상태입니다.");
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    return q->data[q->front];
}

void level_order(TreeNode *ptr)
{
    QueueType q;
    init_queue(&q);
    if (ptr == NULL) return;
    enqueue(&q, ptr);
    while (!is_empty(&q)) {
        ptr = dequeue(&q);
        printf(" [%d] ", ptr->data);
        if (ptr->left)
            enqueue(&q, ptr->left);
        if (ptr->right)
            enqueue(&q, ptr->right);
    }
}
//      15
// 4          20
// 1      16      25
TreeNode n1 = {1, NULL, NULL};
TreeNode n2 = {4, &n1, NULL};
TreeNode n3 = {16, NULL, NULL};
TreeNode n4 = {25, NULL, NULL};
TreeNode n5 = {20, &n3, &n4};
TreeNode n6 = {15, &n2, &n5};
TreeNode *root = &n6;

int main(void)
{
    printf("레벨 순회=");
    level_order(root);
    printf("\n");

    return 0;
}