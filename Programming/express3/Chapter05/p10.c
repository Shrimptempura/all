// 조건연산자 '?'이용 (x > 0 && y > 00) ? pf("adf"): pf("");
#include <stdio.h>

int main(void)
{
    int x, y;

    printf("x 좌표를 입력하시오 : ");
    scanf("%d", &x);

    printf("y 좌표를 입력하시오 : ");
    scanf("%d", &y);

    (x > 0 && y > 0) ? printf("1사분면\n"): printf(" ");
    (x < 0 && y > 0) ? printf("2사분면\n"): printf(" ");
    (x < 0 && y < 0) ? printf("3사분면\n"): printf(" ");
    (x > 0 && y < 0) ? printf("4사분면\n"): printf(" ");

    return 0;
}