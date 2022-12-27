// 이항 계수(binomial coefficient)를 계산하는 순환 함수 작성
#include <stdio.h>

int recursive(int n, int k);

int main(void)
{
    int n, k;
    printf("n = ");
    scanf("%d", &n);

    printf("k = ");
    scanf("%d", &k);

    printf("%d\n", recursive(n, k));

    return 0;
}

int recursive(int n, int k)
{
    if (k == 0 || k == n)   // n == 1 || n == k
        return 1;
    else
        return (recursive(n - 1, k - 1) + recursive(n - 1, k));
}