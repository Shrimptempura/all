/*
연결 리스트로 구현된 큐
장점) 배열로 구현된 큐에 비하여 크기가 제한되지 않는다는 장점을 가짐
단점) 배열로 구현된 큐에 비하여 코드가 약간 더 복잡해지고, 링크필드 때문에 메모리 공간을 더 사용

기본적인 구조 : 단순 연결 리스트에다가 2개의 포인터를 추가한 것
front : 삭제와 관련         rear : 삽입과 관련
큐에 요소가 없는 경우 : front와 rear는 NULL 값이 된다.
큐의 요소들은 구조체로 정의되며 이 구조체는 데이터를 저장하는 data 필드와
다음 노드를 가리키기 위한 포인터가 들어 있는 link 필드로 이루어짐 */

// <연결된 큐 정의>
typedef int element;
typedef struct QueueNode {
    element data;
    struct QueueNode *link;
} QueueNode;

typedef struct {        //  큐 ADT 구현
    QueueNode *front, *rear;
} LinkedQueueType;

/*
삽입 연산은 먼저 동적 메모리 할당을 통하여 새로운 노드를 생성한 다음
데이터를 저장하고 연결 리스트의 끝에 새로운 노드를 추가하면 된다. */
// 연결된 큐 삽입 연산
void enqueue(LinkedQueueType *q, element data)
{
    QueueNode *temp = (QueueNode *)malloc(sizeof(QueueNode));
    temp->data = data;      // 데이터 저장
    temp->link = NULL;      // 링크 필드를 NULL
    if (is_empty(q)) {      // 큐가 공백이면
        q->front = temp;
        q->rear = temp;
    }
    else {
        q->rear->link = temp;
        q->rear = temp;
    }
}

/* 삭제 연산
연결 리스트의 처음에서 노드를 꺼내오면 된다.
삭제 연산은 먼저 큐가 공백상태인지 검사후, 공백이 아니면 front가 가리키는 노드를 temp가 가리키고
front는 front의 링크값으로 대입한다. 그러면 front는 현재 가리키는 노드의 다음 노드를 가리킨다.
그 다음 temp가 가리키는 노드로부터 데이터를 꺼내오고 동적 메모리 해제를 통하여 이 노드를 삭제한다. */

// 연결된 큐 삭제 연산
element dequeue(LinkedQueueType *q)
{
    QueueNode *temp = q->front;
    element data;
    if (is_empty(q)) {
        fprintf(stderr, "스택이 비어있음\n");
        EXIT_FAIRURE;
    }
    else {
        data = temp->data;
        q->front = q->front->link;
        if (q->front == NULL)
            q->rear = NULL;
        free(temp);
        return data;
    }
}