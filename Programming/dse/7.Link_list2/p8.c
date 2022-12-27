/*
<연결리스트로 구현한 스택>
제공되는 외부 인터페이스는 완전히 동일 달라지는 것은 스택의 내부구현
장점) 크기가 제한되지 않는다 : 동적 메모리 할당만 할 수있으면 스택에 새로운 요소를 삽입 가능
단점) 동적 메모리 할당이나 해제를 해야하므로 삽입이나 삭제 시간은 더 걸린다.

연결된 스택은 기본적으로 연결 리스트이기 때문에 다음과 같이 노드를 정의한다.
노드는 우리가 저장하고 싶은 데이터 필드와 다음 노드를 가리키기 위한 포인터가 들어 있는
링크 필드로 구성된다. 또한 top은 더 이상 정수가 아니고 노드를 가리키는 포인터로 선언된다.
또한 연결된 스택에 관련된 데이터는 top 포인터 뿐이지만 일관성을 위하여
LinkedStackType이라는 구조체 타입으로 정의되었다.
모든 함수들은 이 구조체의 포인터를 매개 변수로 받아서 사용한다.

typedef int element;
typedef struct StackNode {
    element data;
    struct StackNode *link;
} StackNode;

typedef struct {
    StackNode *top;
} LinkedStackType;

연결된 스택은 개념적으로 단순 연결 리스트에서 맨 앞에 데이터를 삽입하는 것과 동일하다.
연결된 스택에서는 헤드 포인터가 top이라는 이름으로 불리는 것 이외 별 차이점이 없다.

삽입 연산에서는 먼저 동적 메모리 할당으로 노드를 만들고 이 노드를 첫 번째 노드로 삽입한다.
top의 값을 temp->link에 복사한 다음, temp를 top에 복사한다.

삭제 연산에서는 top의 값을 top->link로 바꾸고 기존의 top이 가리키는 노드를 동적 메모리 해제한다.
*/

// 연결된 스택 프로그램
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct StackNode {
    element data;
    struct StackNode *link;
} StackNode;

typedef struct {
    StackNode *top;
} LinkedStackType;

void init(LinkedStackType *s)
{
    s->top = NULL;
}

int is_empty(LinkedStackType *s)
{
    return (s->top == NULL);
}

int is_full(LinkedStackType *s)
{
    return 0;
}

void push(LinkedStackType *s, element item)
{
    StackNode *temp = (StackNode *)malloc(sizeof(StackNode));
    temp->data = item;
    temp->link = s->top;
    s->top = temp;
}

void print_stack(LinkedStackType *s)
{
    for (StackNode *p = s->top; p != NULL; p = p->link)
        printf("%d->", p->data);
    printf("NULL \n");
}

element pop(LinkedStackType *s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택이 비어있음");
        EXIT_FAILURE;
    }
    else {
        StackNode *temp = s->top;
        int data = temp->data;
        s->top = s->top->link;      // blink question
        free(temp);
        return data;
    }
}

element peek(LinkedStackType *s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택이 비어있음\n");
        EXIT_FAILURE;
    }
    else {
        return s->top->data;
    }
}

int main(void)
{
    LinkedStackType s;
    init(&s);
    push(&s, 1); print_stack(&s);
    push(&s, 2); print_stack(&s);
    push(&s, 3); print_stack(&s);
    pop(&s); print_stack(&s);
    pop(&s); print_stack(&s);
    pop(&s); print_stack(&s);

    return 0;
}