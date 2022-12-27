// p9.c 연계, 동전 던지기 게임 만들기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand(void);

int main(void)
{
    int i, num;
    char retry;
    while(1)
    {
        printf("앞면 또는 뒷면(1 또는 0) : ");
        scanf("%d", &num);

        if (num == b_rand())
            printf("맞았습니다.\n");
        else
            printf("틀렸습니다.\n");

        getchar();
        
        while (1)
        { 
            printf("계속하시겠습니까?(y 또는 n) : ");
            retry = getchar();
            getchar();
            
            if (retry == 'n')
                return 0;
            else if (retry == 'y')
                break;
            else
                continue;
        }
    }

    return 0;
}

int b_rand(void)
{
    return rand() % 2;
}
