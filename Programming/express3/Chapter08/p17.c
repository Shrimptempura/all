// 두개의 부동 소수점 수가 근사적으로 같은 값이면 1을 반환하고 근사적으로 같지 않으면
// 0을 넘겨주는 함수 f_equal(a, b)을 작성하시오
#include <stdio.h>
#include <math.h>

double f_equal(double x, double y);
double f_abs(double x);
double f_min(double x, double y);

int main(void)
{
    double a, b;

    printf("실수를 입력하시오 : ");
    scanf("%lf", &a);

    printf("실수를 입력하시오 : ");
    scanf("%lf", &b);

    if (f_equal(a, b) == 1)
        printf("두 개의 실수는 서로 같음\n");
    else
        printf("두 개의 실수는 서로 다름\n");
    
    return 0;
}

double f_equal(double x, double y)
{
    double value;
    value = f_abs(x - y) / f_min(f_abs(x), f_abs(y));
    if (value < 0.000001) return 1;
    else return 0;
}

double f_abs(double x)
{
    if (x > 0) return x;
    else return -x;
}

double f_min(double x, double y)
{
    if (x > y) return y;
    else return x;
}