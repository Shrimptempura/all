#include <stdio.h>

int main(void)
{
    int number, number1, number2;     // digit : 숫자
    int i;

    printf("Enter a two-digit number : ");
    scanf("%d", &number);

    number1 = number % 10;
    number2 = number / 10;

    printf("The reversal is : %d%d\n", number1, number2);

    return 0;
}