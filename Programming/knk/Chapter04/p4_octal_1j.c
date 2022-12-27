#include <stdio.h>

long octal(long n);

int main(void)
{
    long n;

    printf("Enter a number between 0 and 32767 : ");
    scanf("%ld", &n);

    // printf("%d\n", number / 8);
    printf("In octal, your number is : %ld\n", octal(n));      // octal : 8진법

    return 0;
}

long octal(long n)
{
    if (n <= 7)
        return n;
    return octal(n / 8) * 10 + n % 8;
}

// 244