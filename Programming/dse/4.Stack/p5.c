/* 괄호검사 알고리즘
check_matching(exper):

while (입력 expr의 끝이 아니면)
ch <- expr의 다음 글자
switch(ch)
    case '(': case '[': case '{':
        ch를 스택에 삽입
        break;
    case ')': case ']': case '}':
        if (스택이 비어 있으면)
            then 오류
            else 스택에서 open_ch를 꺼낸다
                if (ch와 open_ch가 같은 짝이 아니면)
                    then 오류 보고
    break
if (스택이 비어 있지 않으면)
    then 오류
*/

// 괄호 검사 프로그램
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

int check_matching(const char *in)
{
    StackType s;
    char ch, open_ch;
    int i, n = strlen(in);
    init_stack(&s);

    for (i = 0; i < n; i++)
    {
        ch = in[i];
        switch (ch){
            case '(': case '[': case '{':
                push(&s, ch);
                break;
            case ')': case ']': case '}':
                if (is_empty(&s)) return 0;
                else {
                    open_ch = pop(&s);
                    if ((open_ch == '(' && ch != ')') || 
                        (open_ch == '[' && ch != ']') ||
                        (open_ch == '{' && ch != '}')) {
                            return 0;
                        }
                    break;
                }
        }
    }
    if (!is_empty(&s)) return 0;
    return 1;
}

int main(void)
{
    char *p = "{A[(i + 1)] = 0}";
    if (check_matching(p) == 1)
        printf("%s 괄호검사성공\n", p);
    else
        printf("%s 괄호검사실패\n", p);
    
    return 0;
}
