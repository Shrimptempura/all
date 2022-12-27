#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Reverse is : ");
    do {
        printf("%d", num % 10);
        num /= 10;
    } while (num);

    printf("\n");

    return 0;
}