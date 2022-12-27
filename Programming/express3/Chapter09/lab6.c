// 최대공약수 구하기, 두 수 x와 y의 최대 공약수는 y와 (x % y)의 최대 공약수와 같으며
// x와 0의 최대 공약수는 x라는 것이다. 단 여기서 x는 y보다 커야 한다.
// gcd(x, y) = gcd(y, x % y)            gcd(x, 0) = x
#include <stdio.h>

int gcd(int x, int y);

int main(void)
{
    printf("%d\n", gcd(30, 20));
}

// x는 y보다 커야 한다.
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);       // 재귀
}