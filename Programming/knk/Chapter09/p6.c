#include <stdio.h>

double polynomial(double number);

int main(void)
{
    double number;

    printf("What's the value of X? : ");
    scanf("%lf", &number);

    printf("polynomial's value : %.2lf\n", polynomial(number));

    return 0;
}

double polynomial(double number)
{
    double x;

    x = number;

    return (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - 
        (x * x) + (7 * x) - 6;
}