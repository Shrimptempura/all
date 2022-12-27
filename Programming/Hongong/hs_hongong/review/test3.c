#include <stdio.h>

int main(void)
{
    int num = 0;
    int sum = 0;
    int cnt = 0;

    while (sum < 10000)
    {
        num += 1;
        sum += num;
        cnt += 1;
    }

    printf("1부터 %d까지의 합은 %d입니다.\n", cnt, sum);

    return 0;
}