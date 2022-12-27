// 소수찾기
#include <stdio.h>

int is_prime(int n);
int get_integer(void);

int main(void)
{
    int num, res;
    num = get_integer();

    if (is_prime(num) == 0)
        printf("%d는 소수가 아닙니다.\n", num);
    else
        printf("%d는 소수입니다.\n", num);
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
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}