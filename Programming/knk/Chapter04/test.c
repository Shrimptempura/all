#include <stdio.h>

void Toc(int num);

int main(void)
{
    int num;

    printf("input : ");
    scanf("%d", &num);

    if (num > 0)
        Toc(num);
    else
        printf("0");

    putchar('\n');

    return 0;
}

void Toc(int num)
{
    if (num > 0)
    {
        Toc(num / 8);
        printf("%d", num % 8);
    }
}