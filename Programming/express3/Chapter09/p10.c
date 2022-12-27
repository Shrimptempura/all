// 수식 값 계산 순환적 프로그램
#include <stdio.h>

double recursive(int num);

int main(void)
{
    int num;
    printf("몇번 돌릴껀가요? ");
    scanf("%d", &num);

    printf("%lf\n", recursive(num));
}

double recursive(int num)
{
    if (num == 0)
        return 0;

    return 1.0 / num + recursive(num -1);
}