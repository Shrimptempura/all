/*
객체 : 0개 이상의 원소를 가지는 유한 선형 리스트
연산 : 
    create(size) : 최대 크기가 size인 공백 스택 형성
    is_full(s)
        if (스택의 원소수 == size) return TRUE;
        else return FALSE;
    is_empty(s)
        if (스택의 원소수 == 0) return TRUE;
        else return FALSE;
    push(s, item)
        if (is_full(s)) return ERROR_STACKFULL;
        else 스택의 맨 위에 item을 추가한다.
    pop(s)
        if (is_empty(s)) return ERROR_STACKEMPTY;
        else 스택의 맨 위에 item을 추가한다.
    peek(s)
        if (is_empty(s)) return ERROR_STACKEMPTY;
        else 스택의 맨 위의 원소를 제거하지 않고 반환한다.

    공백상태) top == -1
    포화상태) MAX_STACK_SIZE - 1
*/

// 전역변수로 구현하는 방법
#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100

typedef int element;
element stack[MAX_STACK_SIZE];
int top = -1;

int is_empty()
{
    return (top == -1);
}

int is_full()
{
    return (top == (MAX_STACK_SIZE - 1));
}

void push(element item)
{
    if (is_full()) {
        fprintf(stderr, "스택 포화 에러");
        return;
    }
    else stack[++top] = item;
}

element pop()
{
    if (is_empty()) {
        fprintf(stderr, "스택 공백 에러");
        EXIT_FAILURE;
    }
    else return stack[top--];
}

element peek()
{
    if (is_empty()) {
        fprintf(stderr, "스택 공백 에러");
        EXIT_FAILURE;
    }
    else return stack[top];
}

int main(void)
{
    push(1);
    push(2);
    push(3);
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());

    return 0;
}