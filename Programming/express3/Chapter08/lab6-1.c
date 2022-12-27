// 소수찾기
#include <stdio.h>

int is_prime(int n);
int get_integer(void);

int main(void)
{
    int num, res;
    
    num = get_integer();
    is_prime(num);

    return 0;
}

int get_integer(void)
{   
    int num;

    printf("정수를 입력하세요 : ");
    scanf("%d", &num);

    return num;
}

int is_prime(int n)
{
    int i, j;
    for (i = 2; i <= n; i++)
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