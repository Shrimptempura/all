// 지뢰찾기 예시 문제
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));
    char mine[10][10] = {0, };
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if ((rand() % 100) < 30)
                printf("# ");
            else
                printf(". ");
        }
        printf("\n");
    }

    return 0;
}