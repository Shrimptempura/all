// 팩토리얼 계산 함수
#include <stdio.h>

int pack(int n);

int main(void)
{   
    int n;
    printf("알고 싶은 팩토리얼의 값은 ? ");
    scanf("%d", &n);

    printf("%d!의 값은 %d입니다.\n", n, pack(n));

    return 0;
}

int pack(int n)
{
    int res, i;
    res = 1;

    for(i = 1; i <= n; i++)
    {
        res *= i;
    }
    
    return res;
}