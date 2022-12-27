// top 변수는 스택이 비어있으면 '-1'의 값을 가진다. 0의 값을 가지면 안되는 이유?
// top의 값이 0이면 배열의 인덱스 0에 데이터가 있다는 것을 의미하기 때문이다.
// <정수 배열 스택 프로그램>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100      // 스택의 최대 크기
typedef int element;            // 데이터의 자료형
element stack[MAX_STACK_SIZE];  // 1차원 배열
int top = -1;

// 공백 상태 검출 함수
int is_empty()
{
    return (top == -1);
}

// 포화 상태 검출 함수
int is_full()
{
    return (top == (MAX_STACK_SIZE - 1));
}

// 삽입 함수
void push(element item)
{
    if (is_full()) {
        fprintf(stderr, "스택 포화 에러\n");
        return;
    }
    else stack[++top] = item;
}

// 삭제 함수
element pop()
{
    if (is_empty()) {
        fprintf(stderr, "스택 공백 에러\n");
        EXIT_FAILURE;
    }
    else return stack[top--];
}

// 피크 함수
element peek()
{
    if (is_empty()) {
        fprintf(stderr, "스택 공백 에러\n");
        EXIT_FAILURE;
    }
    else return stack[top];
}

int main(void)
{
    push(1);
    push(2);
    push(3);
    printf("%d\n", pop());      // 뺀값 출력
    printf("%d\n", pop());
    printf("%d\n", pop());

    return 0;
}