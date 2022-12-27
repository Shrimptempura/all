// 50달러로 도박을 한다. 한번에 1달러씩 걸고, 돈을 딸 확률은 0.5이다.
// 모두 잃거나 250달러를 딸때까지 한다. 100번 도박장에 가면 몇번이나 250달러를 딸까?
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int dollar = 50, cnt = 0, i;
    srand((unsigned int)time(NULL));

    for (i = 0; i < 100; i++)
    {
        dollar = 50;
        while (dollar != 0 && dollar != 250)
        {
            if ((double)rand() / RAND_MAX < 0.5)
            {    
                dollar++;
            }
            else dollar--;
        }
        if (dollar == 250)
            cnt++;
    }

    printf("초기 금액 50$\n목표 금액 250$\n");
    printf("100번 중에서 %d번 성공\n", cnt);

    return 0;
    }