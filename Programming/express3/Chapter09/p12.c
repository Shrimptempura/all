// 순환호출을 이용하여 피보나치수열 표현하기
#include <stdio.h>

int fib(int num);

int main(void)
{
    int num;
    printf("몇번째 피보나치 수열? ");
    scanf("%d", &num);

    printf("%d\n", fib(num));

    return 0;
}

int fib(int num)
{
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else 
        return (fib(num - 2) + fib(num - 1));
}