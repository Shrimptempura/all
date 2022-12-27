// 세균 번식, 1시간 마다 4배씩 증가. 10마리를 배양하면 7시간후 세균의 수는?
#include <stdio.h>

int main(void)
{
    int germ = 10;   // 세균
    int sum = 0, i = 1;

    while (i <= 7)
    {
        germ *= 4;
        sum += germ;
        i++;
    }
    printf("7시간후 세균의 수는? %d\n", sum);

    return 0;
}
