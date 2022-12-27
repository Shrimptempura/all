// 모든 소수 찾기 (2 ~ 100)
#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 2; i <= 100; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0) break;
        }
        if (i == j)
            printf("%d ", i);
    }

    return 0;
}