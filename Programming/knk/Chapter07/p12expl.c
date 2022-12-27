#include <stdio.h>

int main(void)
{
    char ch;
    double num, total = 0;

    printf("Enter an expression : ");
    scanf("%lf", &total);
    while ((ch = getchar()) != '\n')    // 1 + 2.5 * 3;
    {
        printf("%c\n", ch);
        scanf("%lf", &num);
        switch (ch)
        {
            case '+':
                total += num;
                break;
            case '-':
                total -= num;
                break;
            case '*':
                total *= num;
                break;
            case '/':
                total /= num;
                break;
            case '%':
                total = (int)total % (int)num;
                break;
            default:
                break;
        }
    }
    printf("Value of expression : %.1lf\n", total);

    return 0;
}