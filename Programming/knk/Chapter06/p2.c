// gcd 최대공약수, 재귀방법(반복방법은 숫자가 클수록 회차가 늘어남)
// 반복문일시 단 (a > b) 가정
#include <stdio.h>

int gcd(int a, int b);

int main(void)
{
    int integer1, integer2;

    printf("Enter two integers : ");
    scanf("%d %d", &integer1, &integer2);

    printf("Greastest common divisor : %d\n", gcd(integer1, integer2));

    return 0;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}