// 2차원 배열
#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 5

int main(void)
{
    int s[ROWS][COLS];
    int i, j;

    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            s[i][j] = rand() % 100;

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
            printf("%02d ", s[i][j]);       // 02붙이면 2넓이 만큼, 01, 03 .. 0 붙여서
        printf("\n");
    }

    return 0;
}