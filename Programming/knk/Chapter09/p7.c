#include <stdio.h>

double ft_power(double number, int coef);

int main(void)
{
    double number;
    int coef;
    double result;

    printf("What's the value of X? : ");
    scanf("%lf", &number);

    // printf("fafjkladjfjaklf : %.2lf\n", 3 * ft_power(number, 5));

    result =  3 * ft_power(number, 5) + 2 * ft_power(number, 4) - 5 * ft_power(number, 3) -
            ft_power(number, 2) + 7 * number - 6;

    printf("%.2lf\n", result);

    return 0;
}

double ft_power(double number, int coef)
{
    int i;
    int c8 = 1;
// 그냥 number *= number하면 다음 계수는 x = x*x, x= x*x*x*가 되버림
    for (i = 0; i < coef; i++) {
        c8 *= number;
    }

    return c8;
}