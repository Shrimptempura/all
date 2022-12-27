#include <stdio.h>
#include <string.h>

int main(void)
{
    double income;

    printf("Enter the amount of taxable imcome : ");
    scanf("%lf", &income);

    if (income < 750)
        income *= 0.01;
    else if (income < 2251)
        income = 7.50 + (income - 750.0) * 0.02;
    else if (income < 3751)
        income = 37.50 + (income - 2250) * 0.03;
    else if (income < 5251)
        income = 82.50 + (income - 3750) * 0.04;
    else if (income < 7001)
        income = 142.50 + (income - 5250) * 0.05;
    else
        income = 230.00 + (income - 7000) * 0.05;

    printf("Tax due is %lf\n", income);

    return 0;
}