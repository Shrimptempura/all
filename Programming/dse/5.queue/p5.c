/*
<덱> deque 
    : double-ended queue : 큐의 전단(front)과 후단(rear)에서 모두 삽입과 삭제가 가능한 큐
    : 그렇지만 여전히 중간에 삽입하거나 삭제하는 것은 허용하지 않는다.

덱의 추상 자료형
객체: n개의 element형의 요소들의 순서있는 모임
연산:
    create() : 덱을 생성한다.
    init(dq) : 덱을 초기화한다.
    is_empty(dq) :
    is_full(dq) :
    add_front(dq, e) : 덱의 앞에 요소를 추가한다.
    add_rear(dq, e) : 덱의 뒤에 요소를 추가한다.
    delete_front(dq) : 덱의 앞에 있는 요소를 반환한 다음 삭제한다.
    delete_rear(dq) : 덱의 뒤에 있는 요소를 반환한 다음 삭제한다.
    get_front(q) : 덱의 앞에서 삭제하지 않고, 앞에 있는 요소를 반환한다.
    get_rear(q) : 덱의 뒤에서 삭제하지 않고, 뒤에 있는 요소를 반환한다.

원형 큐와 덱은 공통점이 많다. 원형 큐를 확장하면 덱을 구현가능하다.
덱도 원형큐와 같이 전단과 후단을 사용한다, 추가적인 데이터는 필요없다.
#define MAX_DEQUE_SIZE 5
typedef int element;
typedef struct {
    element data[MAX_DEQUE_SIZE];
    int front, rear;
} DequeType;

front <- (front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
rear <- (rear - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
*/

// 원형 덱 프로그램
#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 5

typedef int element;
typedef struct {
    element data[MAX_QUEUE_SIZE];
    int front, rear;
} DequeType;

void error(char *message)
{
    fprintf(stderr, "%s\n", message);
    EXIT_FAILURE;
}

void init_deque(DequeType *q)
{
    q->front = q->rear = 0;
}

int is_empty(DequeType *q)
{
    return (q->front == q->rear);
}

int is_full(DequeType *q)
{
    return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

void deque_print(DequeType *q)
{
    printf("DEQUE(front=%d rear=%d) = ", q->front, q->rear);
    if (!is_empty(q)) {
        int i = q->front;
        do {
            i = (i + 1) % (MAX_QUEUE_SIZE);
            printf("%d | ", q->data[i]);
            if (i== q->rear)
                break;
        } while (i != q->front);
    }
    printf("\n");
}

void add_rear(DequeType *q, element item)
{
    if (is_full(q))
        error("큐가 포화상태입니다");
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->data[q->rear] = item;
}

element delete_front(DequeType *q)
{
    if (is_empty(q))
        error("큐가 공백상태입니다.");
        q->front = (q->front + 1) % MAX_QUEUE_SIZE;
        return q->data[q->front];
} 

element get_front(DequeType *q)
{
    if (is_empty(q))
        error("큐가 공백상태입니다.");
    return q->data[(q->front + 1) % MAX_QUEUE_SIZE];
}

void add_front(DequeType *q, element val)
{
    if (is_full(q))
        error("큐가 포화상태입니다.");
    q->data[q->front] = val;
    q->front = (q->front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
}

element delete_rear(DequeType *q)
{
    int prev = q->rear;
    if (is_empty(q))
        error("큐가 공백 상태입니다.");
    q->rear = (q->rear - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
    return q->data[prev];
}

element get_rear(DequeType *q)
{
    if (is_empty(q))
        error("큐가 공백상태입니다.");
    return q->data[q->rear];
}

int main(void)
{
    DequeType queue;

    init_deque(&queue);
    for (int i = 0; i < 3; i++) {
        add_front(&queue, i);
        deque_print(&queue);
    }
    for (int i = 0; i < 3; i++) {
        delete_rear(&queue);
        deque_print(&queue);
    }

    return 0;
}
