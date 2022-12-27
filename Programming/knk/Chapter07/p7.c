#include <stdio.h>

int main(void)
{
    int a, b, sum = 0;
    char ch;

    printf("Enter the formula : ");
    scanf("%d %c %d", &a, &ch, &b);

    switch (ch)
    {
        case '+':
            sum = a + b;
            break;
        case '-':
            sum = a - b;
            break;
        case '*':
            sum = a * b;
            break;
        case '%':
            sum = a % b;
            break;
        case '/':
            sum = a / b;
            break;
        default:
            printf("Wrong Calculation\n");
            return 0;
    }
    printf("Value : %d\n", sum);

    return 0;
}