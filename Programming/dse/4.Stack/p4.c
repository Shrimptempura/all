// p3.c는 스택을 정적으로 선언하였으나 동적 메모리 할당을 이용항 스택을 생성할수 있다.
// 이방법 사용시, 각종 함수들을 호출할 때 보다 자연스러운 표현이 가능하다.
// 하지마 사용이 끝나면 반드시 동적 메모리를 반환해야 한다.

// 동적 배열 프로그램 (malloc 반환 값 생략)
#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100

typedef int element;
typedef struct {
    element *data;      // data는 포인터로 정의
    int capacity;       // 현재 크기
    int top;
} StackType;

void init_stack(StackType *s)
{
    s -> top = -1;
    s -> capacity = 1;
    s -> data = (element *)malloc(s -> capacity * sizeof(element));
}

int is_empty(StackType *s)
{
    return (s -> top == -1);
}

int is_full(StackType *s)
{
    return (s -> top == (MAX_STACK_SIZE - 1));
}

void push(StackType *s, element item)
{
    if (is_full(s)) {
        s -> capacity *= 2;
        s -> data = (element *)realloc(s -> data, s -> capacity * sizeof(element));
    }
    s -> data[++(s -> top)] = item;
}

element pop(StackType *s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러");
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
    push(&s, 3);
    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));
    free(s.data);

    return 0;
}
