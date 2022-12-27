/*
스택의 응용: 후위 표기 수식의 계산
Token
8   8
2   8   2
/   4   (= 8 / 2)
3   4   3
-   1   (= 4 - 3)
3   1   3
2   1   3   2
*   1   6   (= 3 * 2)
+   7   (= 1 + 6)

후위 표기 수식 계산 알고리즘
calc_posfix:
    스택 s를 생성하고 초기화 한다.
    for item in 후위표기식 do
        if (item이 피연산자이면)
            push(s, item)
        else if (item이 연산자 op이면)
            second <- pop(s)
            first <- pop(s)
            result <- first op second        op는 /+-* 중의 하나
            push(s, result)
    first_result <- pop(s);
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 100

typedef char element;
typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} StackType;

void init_stack(StackType *s)
{
    s -> top = -1;
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
        fprintf(stderr, "스택 포화 에러");
        return;
    }
    else s -> data[++(s -> top)] = item;
}

element pop(StackType *s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러");
        EXIT_FAILURE;
    }
    else return s -> data[(s -> top)--];
}

element peek(StackType *s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러");
        EXIT_FAILURE;
    }
    else return s -> data[s -> top];
}

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
            value = ch - '0';   // char ch - '0' ask2
            push(&s, value);
        }
        else {
            op2 = pop(&s);
            op1 = pop(&s);
            switch (ch) {
                case '+': push(&s, op1 + op2); break;
                case '-': push(&s, op1 - op2); break;
                case '*': push(&s, op1 * op2); break;
                case '/': push(&s, op1 + op2); break;
            }
        }
    }
    return pop(&s);
}

int main(void)
{
    int result;
    printf("후위 표기식은 82/3-32*+\n");
    result = eval("82/3-32*+");
    printf("결과값은 %d\n", result);

    return 0;
}