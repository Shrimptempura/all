#include <stdio.h>
#include <math.h>
#define PIE 3.141592

double sin_degree(double degree);

int main(void)
{
    double degree;
    printf("각도를 입력하세요 : ");
    scanf("%lf", &degree);

printf("sin의 %lf의 값은 %lf입니다.\n", degree, sin_degree(degree));
//    for (degree = 0; degree <= 180; degree = degree + 10)
//        printf("sin(%d)의 값은 %lf\n", (int)degree, sin_degree(degree));

    return 0;
}

double sin_degree(double degree)
{
    double r;

    r = sin(PIE * degree / 180);

    return r;
}