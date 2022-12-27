#include <stdio.h>

int is_prime(int x);

int main(void)
{
    int i, j;

    for (i = 2; i < 100; i++)
    {
        if (is_prime(i) == 1)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}

int is_prime(int x)
{
    int i;
    for (i = 2; i < x; i++)     // i < x를 사용해, <=일시 x값까지 나오지만
    {                           // < 으로 인해 나누어 떨어지면 소수가 아닌수.
        if (x % i == 0)
            return 0;
    }
    return 1;
}