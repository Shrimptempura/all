// combination w.factorial
#include <stdio.h>

long combination(int n, int r);
int get_integer(void);
long factorial(int n);

int main(void)
{
    int a, b;

    a = get_integer();
    b = get_integer();

    printf("C(%d, %d) = %ld\n", a, b, combination(a, b));

    return 0;
}

long combination(int n, int r)
{
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}

int get_integer(void)
{
    int n;

    printf("정수를 입력하시오 : ");
    scanf("%d", &n);

    return n;
}

long factorial(int n)
{
    int i;
    long result = 1;

    for (i = 1; i <= n; i++)
        result *= i;
    
    return result;
}