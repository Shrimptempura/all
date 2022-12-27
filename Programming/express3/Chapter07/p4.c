// 반복 루프을 이용해서 패턴 출력하기
#include <stdio.h>

int main(void)
{
    int num, i, j, k;

    printf("몇층 쌓을래여? ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        for (j = num; i < j - 1; j--)
        {
            printf(" ");
        }
        for (k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}