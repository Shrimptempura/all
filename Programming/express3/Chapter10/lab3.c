#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void)
{
    srand((unsigned)time(NULL));
    int i, min;
    int prices[SIZE] = {0};

    printf("-----------------------------\n");
    printf("1  2  3  4  5  6  7  8  9  10\n");
    printf("-----------------------------\n");

    for (i = 0; i < SIZE; i++)
    {
        prices[i] = rand() % 101;
        printf("%-3d ", prices[i]);
    }
    printf("\n\n");

    min = prices[0];

    for (i = 1; i < SIZE; i++)
    {
        if(prices[i] < min)
            min = prices[i];
    }
    printf("최소값은 %d입니다.\n", min);

    return 0;
}