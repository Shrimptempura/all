#include <stdio.h>

int fibo(int n);

int main(void)
{
    printf("fibo(%d) = %d\n", 7, fibo(7));

    return 0;
}

int fibo(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibo(n - 2) + fibo(n - 1);

}