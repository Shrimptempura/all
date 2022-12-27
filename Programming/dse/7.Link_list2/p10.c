// 연결된 큐 프로그램
// 공백 상태 검출은 front나 rear가 NULL, 연결 리스트인 경우 메모리 할당과정에서 오류가 있지 않는
// 한 포화 상태는 없다고 본다. 따라서 포화 상태 검출 함수는 항상 0을 반환한다.  --> *중요
#include <stdio.h>
#include <stdlib.h>

typedef int element;        // 요소의 타입
typedef struct QueueNode {  // 큐의 노드 타입
    element data;
    struct QueueNode *link;
} QueueNode;

typedef struct {        // 큐 ADT 구현
    QueueNode *front, *rear;
} LinkedQueueType;

void init(LinkedQueueType *q)
{
    q->front = q->rear = 0;
}

int is_empty(LinkedQueueType *q)
{
    return (q->front == NULL);
}

int is_full(LinkedQueueType *q)
{
    return 0;
}

void enqueue(LinkedQueueType *q, element data)
{
    QueueNode *temp = (QueueNode *)malloc(sizeof(QueueNode));
    temp->data = data;      // 데이터 저장
    temp->link = NULL;      // 링크 필드를 NULL
    if (is_empty(q)) {
        q->front = temp;
        q->rear = temp;
    }
    else {                      // 큐가 공백이 아니면
        q->rear->link = temp;   // 순서가 중요
        q->rear = temp;
    }
}

element dequeue(LinkedQueueType *q)
{
    QueueNode *temp = q->front;
    element data;
    if (is_empty(q)) {      // 공백 상태
        fprintf(stderr, "스택이 비어 있음");
        EXIT_FAILURE;
    }
    else {
        data = temp->data;              // 데이터를 꺼낸다
        q->front = q->front->link;      // front를 다음 노드를 가리키도록 한다
        if (q->front == NULL)           // 공백상태
            q->rear = NULL;
        free(temp);     // 동적메모리 해제

        return data;    // 데이터 반환
    }
}

void print_queue(LinkedQueueType *q)
{
    QueueNode *p;
    for (p = q->front; p != NULL; p = p->link)
        printf("%d->", p->data);
    printf("NULL\n");
}

int main(void)
{
    LinkedQueueType queue;

    init(&queue);

    enqueue(&queue, 1); print_queue(&queue);
    enqueue(&queue, 2); print_queue(&queue);
    enqueue(&queue, 3); print_queue(&queue);
    dequeue(&queue); print_queue(&queue);
    dequeue(&queue); print_queue(&queue);
    dequeue(&queue); print_queue(&queue);

    return 0;

}