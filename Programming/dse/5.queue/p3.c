/*
원형큐에서의 삽입 알고리즘
enqueue(Q, x):
    rear <- (rear + 1) % MAX_QUEUE_SIZE;
    Q[rear] <- x;

원형큐에서의 삭제 알고리즘
dequeue(Q):
    front <- (front + 1) % MAX_QUEUE_SIZE;
    return Q[front];
*/

/* 원형큐의 구현
: front는 첫 번째 요소 하나 앞, rear는 마지막 요소를 가리킨다. 따라서
삽입할 때는 rear를 무조건 먼저 하나 증가시키고 증가된 위치에 삽입을 하고,
사게를 할 때는 먼저 front를 증가시킨 다음, 그 위치에서 데이터를 꺼내온다.
    공백 상태 검출 : front == rear;
    포화 상태 검출 : (rear + 1) % MAX_QUEUE_SIZE == front;
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 5

typedef int element;
typedef struct {
    element data[MAX_QUEUE_SIZE];
    int front, rear;
} QueueType;

void error(char *message)
{
    fprintf(stderr, "%s\n", message);
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

void queue_print(QueueType *q)
{
    printf("QUEUE(front=%d rear=%d) = ", q->front, q->rear);
    if (!is_empty(q)) {
        int i = q->front;
        do {
            i = (i + 1) % (MAX_QUEUE_SIZE);
            printf("%d | ", q->data[i]);
            if (i == q->rear)
                break;
        } while (i != q->front);
    }
    printf("\n");
}

void enqueue(QueueType *q, element item)
{
    if (is_full(q))
        error("큐가 포함입니다.");
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->data[q->rear] = item;
}

element dequeue(QueueType *q)
{
    if (is_empty(q))
        error("큐가 공백상태입니다");
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    return q->data[q->front];
}

element peek(QueueType *q)
{
    if (is_empty(q))
        error("큐가 공백상태입니다");
    return q->data[(q->front + 1) % MAX_QUEUE_SIZE];
}

int main(void)
{
    QueueType queue;
    int element;

    init_queue(&queue);
    printf("--데이터 추가 단계--\n");
    while (!is_full(&queue))
    {
        printf("정수를 입력하시오 : ");
        scanf("%d", &element);
        enqueue(&queue, element);
        queue_print(&queue);
    }
    printf("큐는 포화 상태입니다.\n\n");

    printf("--데이터 삭제 단계--\n");
    while (!is_empty(&queue))
    {
        element = dequeue(&queue);
        printf("꺼내진 상수: %d \n", element);
        queue_print(&queue);
    }
    printf("큐는 공백 상태입니다.\n");

    return 0;
}
