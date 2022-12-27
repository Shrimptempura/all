#include <stdio.h>

int main(void) 
{
    int num = 0;
    int cnt = 1;
    int sum = 0;

    while (1)
    {
        num += 1;
        if (sum += num > 10000)
        {
            printf("1부터 %d까지의 합은 %d입니다.\n", cnt, sum);
            break;
        }
        cnt++;
    }

    return 0;
}