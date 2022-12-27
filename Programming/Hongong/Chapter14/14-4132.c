// 5행 6열의 2차원 배열을 선언하고, 4행 5열 부분은 1부터 20까지 초기화
// 초기화된 배열의 마지막 행, 열에는 각 행, 열의 합을 저장한후 전체 배열 값 출력
#include <stdio.h>

int main(void)
{
    int i, j;       // int x, y;
    int count = 1;
    int ary[5][6];
    
    for (i = 0; i < 4; i++)
    {   // x = 0;
        for (j = 0; j < 5; j++)
        {   // x += count;
            ary[i][j] = count;  // 00 = 1, 01 = 2, 02 = 3, 03 = 4, 04 = 5
            count++;    // i = 1, 10 = 6, 11 = 7, 12 = 8, 13 = 9, 14 = 10
        }
        ary[i][5] = ary[i][0] + ary[i][1] + ary[i][2] + ary[i][3] + ary[i][4];
    }   // ary[i][5] = x;

    for (j = 0; j < 6; j++)
    {   // 이중 for문 이하 y 생략;
        ary[4][j] = ary[0][j] + ary[1][j] + ary[2][j] + ary[3][j];
    }
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%5d", ary[i][j]);
        }
        printf("\n");
    }

    return 0;
}