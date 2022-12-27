// 스택의 응용: 후위 표기 수식의 계산
// 중위(infix), 후위(postfix), 전위(prefix)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 100

// ==== 스택 코드 시작 =====
typedef char element;   // 여기서의 스택은 문자를 저장해야 함으로 char로 정의
typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} StackType;    

// 스택 초기화 함수
void init_stack(StackType *s)
{
    s -> top = -1;
}

// 공백 상태 검출 함수
int is_empty(StackType *s)
{
    return (s -> top == -1);
}

// 포화 상태 검출 함수
int is_full(StackType *s)
{
    return (s -> top == (MAX_STACK_SIZE - 1));
}

// 삽입 함수
void push(StackType *s, element item)
{
    if (is_full(s)) {
        fprintf(stderr, "스택 포화 에러\n");
        return;
    }
    else s -> data[++(s -> top)] = item;
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

// 피크 함수
element peek(StackType *s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러\n");
        EXIT_FAILURE;
    }
    else return s -> data[s -> top];
}
// ==== 스택 코드 끝 ====

// 후위 표기 수식 계산 함수
int eval(char exp[])
{
    int op1, op2, value, i = 0;
    int len = strlen(exp);
    char ch;
    StackType s;

    init_stack(&s);
    for (i = 0; i < len; i++) {
        ch = exp[i];
        if (ch != '+' && ch != '-' && ch != '*' && ch != '/') {
            value = ch - '0';   // 입력이 피연산이면
                                // value = '1' - '0' = 1, 숫자를 만들어주기 위한 연산
            push(&s, value);
        }
        else {      // 연산자이면 피연산자를 스택에서 제거
            op2 = pop(&s);
            op1 = pop(&s);
            switch (ch) {       // 연산을 수행하고 스택에 저장
                case '+': push(&s, op1 + op2); break;
                case '-': push(&s, op1 - op2); break;
                case '*': push(&s, op1 * op2); break;
                case '/': push(&s, op1 / op2); break;
            }
        }
    }
    return pop(&s);
    // 계산시 후위연산임으로, 연산자가 맨뒤에 있어 가능
}

int main(void)
{
    int result;
    printf("후위표기식은 82/3-32*+\n");
    result = eval("82/3-32*+");
    printf("결과값은 %d\n", result);

    return 0;
}