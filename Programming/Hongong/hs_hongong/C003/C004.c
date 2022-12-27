#include <stdio.h>

void show_digit(int n);

int main(void)
{
    int num;

    printf("정수를 입력하시오 : ");
    scanf("%d", &num);

    show_digit(num);
    printf("\n");

    return 0;
}

void show_digit(int n)
{
    int check;

    if (n > 0)
    {
        check = n % 10;
        show_digit(n / 10);
        printf("%3d ", check);
    }
}