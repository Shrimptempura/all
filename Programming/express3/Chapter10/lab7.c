// 2차원 행렬 합치기 예제
#include <stdio.h>
#define ROWS 3
#define COLS 3

int main(void)
{
    int A[ROWS][COLS] = { {2, 3, 0}, {8, 9, 1}, {7, 0, 5} };
    int B[ROWS][COLS] = { {1, 0, 0}, {1, 0, 0}, {1, 0, 0} };
    int C[ROWS][COLS];
    int r, c;

    // 두개의 행렬 더하기
    for (r = 0; r < ROWS; r++)
        for (c = 0; c < COLS; c++)
            C[r][c] = A[r][c] + B[r][c];
    
    // 행렬을 출력하기
    for (r = 0; r < ROWS; r++)
    {
        for (c = 0; c < COLS; c++)
            printf("%d ", C[r][c]);
        printf("\n");
    }

    return 0;
}