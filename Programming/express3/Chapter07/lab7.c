// 복리 이자 계산
#include <stdio.h>
#define RATE 0.07               // 이율
#define INVESTMENT 10000000     // 초기 투자금
#define YEARS 10                // 투자 기간

int main(void)
{
    int i;
    double total = INVESTMENT;

    printf("=================\n");
    printf("연도   원리금\n");
    printf("=================\n");

    for(i = 1; i <= YEARS; i++)
    {
        total = total * (1 + RATE);
        printf("%2d  %10.1lf\n", i, total);
    }

    return 0;
}