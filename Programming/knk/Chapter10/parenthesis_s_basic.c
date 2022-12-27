// <괄호 검사 프로그램>
// 괄호들은 가장 가까운 거리에 있는 괄호들끼리 서로 쌍을 이루어야 한다.
// 따라서 스택을 사용하여 왼쪽 괄호들을 만나면 계속 삽입하다가
// 오른쪽 괄호들이 나오면 스택에서 가장 최근의 왼쪽 괄호를 꺼내어 타입을 비교
//      스택은 항상 최근에 삽입한 것이 먼저 필요한 경우 유용하다.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 100

// ==== 스택 코드 시작 ====
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

int check_matching(const char *in)
{
    StackType s;
    char ch, open_ch;
    int i, n = strlen(in);
    init_stack(&s);     // 스택의 초기화, top = -1

    for (i = 0; i < n; i++) 
    {
        ch = in[i];     
        switch (ch) 
        {
            case '(': case '[': case '{':
                push(&s, ch);
                break;
            case ')': case ']': case '}':
                if (is_empty(&s)) return 0;
                else 
                {
                    open_ch = pop(&s);
                    if ((open_ch == '(' && ch != ')') ||
                        (open_ch == '[' && ch != ']') ||
                        (open_ch == '{' && ch != '}')) 
                        {
                            return 0;
                        }
                    break;
                }
        }
    }
    if (!is_empty(&s)) return 0;    // 스택에 남아 있다면 오류
    return 1;
}

int main(void)
{
    char *p = "{A[(i + 1)] = 0;}";

    if (check_matching(p) == 1)
        printf("%s 괄호검사성공\n", p);
    else 
        printf("%s 괄호검사실패\n", p);
    
    return 0;
}