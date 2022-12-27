#include <stdio.h>

int main(void)
{
    int denominator1, denominator2, molecule1, molecule2;       // 분모, 분자
    int num1, num2;

    printf("Enter two fractions separated by a plus sign : ");
    scanf("%d/%d+%d/%d", &molecule1, &denominator1, &molecule2, &denominator2);

    num1 = denominator1 * denominator2;
    num2 = molecule1 * denominator2 + denominator1 * molecule2;

    printf("The sum is %d/%d\n", num2, num1);

    return 0;
}