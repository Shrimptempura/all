// <동적 배열 스택>
#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100

typedef int element;
typedef struct {
    element *data;      // data은 포인터로 정의된다.
    int capacity;       // 현재 크기
    int top;
} StackType;

// 스택 생성 함수
void init_stack(StackType *s)
{
    s -> top = -1;
    s -> capacity = 1;
    s -> data = (element *)malloc(s -> capacity * sizeof(element));
}

// 공백 상태 검출 함수
int is_empty(StackType *s)
{
    return (s -> top == -1);
}


// 포화 상태 검출 함수
int is_full(StackType *s)
{
    return (s -> top == (s -> capacity - 1));
}

// 삽입 함수
void push(StackType *s, element item)
{
    if (is_full(s)) {
        s -> capacity *= 2;
        s -> data = (element *)realloc(s -> data, s -> capacity * sizeof(element));
    }
    s -> data[++(s -> top)] = item;
}

// 삭제 함수
element pop(StackType *s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러\n");
        EXIT_FAILURE;
    }
    else return s -> data[(s -> top)--];
}

int main(void)
{
    StackType s;
    init_stack(&s);
    push(&s, 1);
    push(&s, 2);
    push(&s, 5);
    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));

    free(s.data);

    return 0;
}


// 앞에서는 모두 컴파일 시간에 크기가 결정되는 1차원 배열을 사용하였다.
// 따라서 컴파일 시간에 필요한 스택의 크기를 알아야 하는데 실제로는 아주 어렵다.
// c언어에서는 malloc()을 호출하여 실행 시간에 메모리를 할당 받을 수 있다.
// 이 기능을 사용하면 필요할 때마다 스택의 크기를 동적으로 늘릴 수 있다.

// 스택이 만들어질 때, 1개의 요소를 저장할 수 있는 공간을 일단 확보한다.
// 가장 큰 변화는 pop()이다. 공간이 부족하면 메모리를 2배로 더 확보한다.
// realloc()은 동적 메모리의 크기를 변경하는 함수로서 현재 내용은 유지하면서
// 주어진 크기로 동적 메모리를 다시 할당한다. 

// 현재 코드는 소스를 간단하게 하기 위해 malloc()에서 반환되는 값을 검사 코드를 
// 생략하였다. 실제로는 NULL이 아닌지 검사해야 한다.