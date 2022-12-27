// (1 + 2 + 3 + ... +)가 10000을 넘지 않으면서 가장 큰 값과 그때의 n의 값 구하기
#include <stdio.h>

int main(void)
{
    int i, num, sum = 0;


    while (1)
    {
        printf("숫자 하나를 고르세요 : ");
        scanf("%d", &num);

        if (num < 1 || num > 10000)
            continue;

        for(i = 1; i <= num; i++)
        {
            sum += i;
        }
        printf("1부터 %d까지의 합은 %d입니다.\n", num, sum);
        break;
    }

    return 0;
}