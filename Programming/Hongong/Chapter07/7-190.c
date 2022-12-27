#include <stdio.h>

double average(double a, double b);

int main(void)
{
    double res;
    res = average(1.5, 3.4);
    printf("%.2lf\n", res);

    return 0;
}

double average(double a, double b)
{
    double tmp;
    tmp = a + b;
    return (tmp / 2.0);
}