// tax를 함수를 이용하자

#include <stdio.h>
#include <string.h>
double tax (double income);

int main(void)
{
    double income;

    printf("Enter the amount of taxable imcome : ");
    scanf("%lf", &income);

    income = tax(income);
    printf("Tax due is %.2lf\n", income);

    return 0;
}

double tax (double income)
{
    double tax;
    if (income < 750)
        tax *= 0.01;
    else if (income < 2251)
        tax = 7.50 + (income - 750.0) * 0.02;
    else if (income < 3751)
        tax = 37.50 + (income - 2250) * 0.03;
    else if (income < 5251)
        tax = 82.50 + (income - 3750) * 0.04;
    else if (income < 7001)
        tax = 142.50 + (income - 5250) * 0.05;
    else
        tax = 230.00 + (income - 7000) * 0.05;
    
    return tax;
}