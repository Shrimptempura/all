// 2차원 표를 배열로 생성하고, 각 행, 열 합계 구하여 출력
#include <stdio.h>

int main(void)
{
    int i, j, sum;
    int scores[3][5] = { {12, 56, 32, 16, 98}, {99, 56, 34, 41, 3}, {65, 3, 87, 78, 21}};

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%5d", scores[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 5; j++)
        {
            sum += scores[i][j];
        }
        printf("%d행의 합계 : %d\n", i, sum);
    }

    for (i = 0; i < 5; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum += scores[j][i];
        }
        printf("%d열의 합계 : %d\n", i, sum);
    }

    return 0;
}
// [3][4]로 고정시에는 이렇게 해야하고
// 한칸 늘려 [4][5]로 만들시 다르다.