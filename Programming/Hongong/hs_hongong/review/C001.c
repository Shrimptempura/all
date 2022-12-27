#include <stdio.h>

int main(void) 
{
    double num;

    printf("x의 값을 입력하시오 : ");
    scanf("%lf", &num);

    if (num <= 0)
        printf("f(x)의 값은 %lf입니다.\n", ((num * num) - (9 * num) + 2));

    else
        printf("f(x)의 값은 %lf입니다.\n", ((7 * num) + 2));

    return 0;
}