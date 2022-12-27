// 매크로 함수를 만들 때 매크로 연산자를 사용하면 인수를 특별한 방법으로 치환할 수 있다.
// #은 매크로 함수의 인수를 문자열로 치환하고 ##은 두 인수를 붙여서 치환한다.
#include <stdio.h>
#define PRINT_EXPR(x) printf(#x " = %d\n", x)
#define NAME_CAT(x, y) (x ## y)

int main(void)
{
    int a1, a2;

    NAME_CAT(a, 1) = 10;        // (a1) = 10;
    NAME_CAT(a, 2) = 20;        // (a2) = 20;
    PRINT_EXPR(a1 + a2);        // printf("a1 + a2" " = %d\n", a1 + a2);
    PRINT_EXPR(a2 - a1);        // printf("a2 - a1" " = %d\n", a2 - a1);

    return 0;
}
/*
#define PRINT_EXPR(x) printf(#x " = %d\n", x)   // 4행
                    |         |
첫번째 x : a1 + a2          두번째 x : "a1 + a2"
먼저 #은 인수를 문자열로 치환한다.
즉 13행의 인수 a1 + a2는 4행의 매크로 함수를 통해 큰 따음표로 묶여 문자열로 치환한다.
PRINT_EXPR(a1 + a2);        // 13행. printf("a1 + a2" " = %d\n", a1 + a2)

컴파일러는 여러 개의 문자열을 연속으로 사용하면 하나의 문자열로 연결해 처리하므로
치환된 문자열은 이어지는 문자열 " = %d\n"과 합쳐저 "a1 + a2 = %d\n"이 된다.

## 연산자는 2개의 토큰(token)을 붙여서 하나로 만드는 연산자입니다. 토큰은 프로그램에서
독립된 의미를 갖는 하나의 단위로 11행은 각각 다른 2개의 토큰 a와 1을 하나로 붙여서
변수명 a1으로 사용하도록 치환합니다.
*/


