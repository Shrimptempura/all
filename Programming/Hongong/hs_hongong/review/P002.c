#include <stdio.h>

int main(void) 
{
    int num;

    printf("정수 입력 : ");
    scanf("%d", &num);

    if (num >= 5 && num <= 15)
        printf("OK\n");
    else
        printf("NOT OK\n");
    
    return 0;
}