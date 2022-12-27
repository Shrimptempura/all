// 동전 던지기 게임
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_toss(void);

int main(void)
{
    srand((unsigned)time(NULL));
    coin_toss();

    return 0;
}

int coin_toss(void)
{
    int i, header = 0, tail = 0;
    for (i = 0; i < 100; i++)
    {
        if (rand() % 2 == 1)
            header++;
        else
            tail++;
    }

    printf("동전의 앞면 : %d\n", header);
    printf("동전의 뒷면 : %d\n", tail);

    return 0;
}