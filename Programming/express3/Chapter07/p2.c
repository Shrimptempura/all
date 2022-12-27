// 1부터 100사이의 모든 3의 배수의 합을 계산하여 출력하는 프로그램 반복사용
#include <stdio.h>

int main(void)
{
    int i, sum = 0;

    for (i = 1; i < 100; i++)
    {
        if (i % 3 == 0) sum += i;
    }
    printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다.\n", sum);

    return 0;
}