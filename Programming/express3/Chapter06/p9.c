#include <stdio.h>

int main(void)
{
    double x, res;

    printf("x의 값을 입력하시오 : ");
    scanf("%lf", &x);

    if (x <= 0)
        res = x * x - 9 * x + 2;
    else
        res = 7 * x + 2;

    printf("f(x)의 값은 %lf\n", res);

    return 0;
}