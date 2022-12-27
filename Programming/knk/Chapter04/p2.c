// p1 extend - 3 digit
#include <stdio.h>

int main(void)
{
    int number, number100, number10, number1;     // digit : 숫자
    int i;

    printf("Enter a three-digit number : ");
    scanf("%d", &number);

    number100 = number / 100;        // 812, 8
    number10 = ((number % 100) / 10);        // 1
    number1 = ((number % 100) % 10);         // 2

    // printf("%d\n", number100);
    // printf("%d\n", number10);
    // printf("%d\n", number1);

    printf("The reversal is : %d%d%d\n", number1, number10, number100);

    return 0;
}