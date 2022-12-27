// 주어진 정수가 소수인지 검사하는 함수 is_prime()작성, 이 함수를 이용하여 2부터
// 100사이의 모든 소수를 출력하라
#include <stdio.h>

void is_prime(void);

int main(void)
{
    is_prime();

    return 0;
}

void is_prime(void)
{
    int i, j;

    for (i = 2; i <= 100; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j) printf("%d ", i);
    }
}