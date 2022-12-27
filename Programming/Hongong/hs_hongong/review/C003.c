#include <stdio.h>

int main(void)
{
    int num;

    printf("정수를 입력하시오 : ");
    scanf("%d", &num);

    do {
        printf("%d", num % 10);
        num /= 10;
    
    } while (num > 0);

    printf("\n");
    return 0;
}