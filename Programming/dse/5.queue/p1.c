/*
큐
객체 : 0개 이상의 요소들로 구성된 선형리스트
연산 :
    create(max_size)
        최대 크기가 max_size인 공백큐를 생성한다.
    is_empty(q)
        if (size == 0) return TRUE;
        else return FALSE;
    is_full(q)
        if (size == max_size) return TRUE;
        else return FALSE;
    enqueue(q, e)
        if (is_full(q)) queue_full 오류;
        else q의 끝에 e를 추가한다.
    dequeue(q)
        if (is_empty(q)) queue_empty 오류;
        else q의 맨 앞에 있는 e를 제거하여 반환한다.
    peek(q)
        if (is_empty(q)) queue_empty 오류;
        else q의 맨 앞에 있는 e를 읽어서 반환한다.

삽입 : rear = 맨뒤       삭제 : front = 맨 앞
*/

// 선형큐 프로그램
#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 5

typedef int element;
typedef struct {
    int front;
    int rear;
    element data[MAX_QUEUE_SIZE];
} QueueType;

void error(char *message)
{
    fprintf(stderr, "%s\n", message);
    EXIT_FAILURE;
}

void init_queue(QueueType *q)
{
    q -> rear = -1;
    q -> front = -1;
}

void queue_print(QueueType *q)
{
    for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
        if (i <= q -> front || i > q -> rear)
            printf("  |  ");
        else
            printf("%d | ", q -> data[i]);
    }
    printf("\n");
}

int is_full(QueueType *q)
{
    if (q -> rear == MAX_QUEUE_SIZE - 1)
        return 1;
    else
        return 0;
}

int is_empty(QueueType *q)
{
    if (q -> front == q -> rear)
        return 1;
    else
        return 0;
}

void enqueue(QueueType *q, int item)
{
    if (is_full(q)) {
        error("큐가 포화상태입니다.");
        return;
    }
    q -> data[++(q -> rear)] = item;
}

int dequeue(QueueType *q)
{
    if (is_empty(q)) {
        error("큐가 공백상태입니다.");
        return -1;
    }
    int item = q -> data[++(q -> front)];
    return item;
}

int main(void)
{
    int item = 0;
    QueueType q;

    init_queue(&q);

    enqueue(&q, 10); queue_print(&q);
    enqueue(&q, 20); queue_print(&q);
    enqueue(&q, 30); queue_print(&q);

    item = dequeue(&q); queue_print(&q);
    item = dequeue(&q); queue_print(&q);
    item = dequeue(&q); queue_print(&q);

    return 0;
}