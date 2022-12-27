// 학생들의 시험 점수 통계 프로그램, 한 학급은 최대 10명, 각 학생들은 3번의 시험을
// 친다. 학생들의 성적은 난수 생성, 각 시험에 대해 최대점수, 최저점수 계산하여 출력
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));
    int i, j, min, max;
    int scores[10][3];

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scores[i][j] = rand() % 101;
        }
    }
    
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }


    for (j = 0; j < 3; j++)
    {
        min = scores[0][j];
        max = scores[0][j];
        for (i = 0; i < 10; i++)
        {
            if (min > scores[i][j])
                min = scores[i][j];
            if (max < scores[i][j])
                max = scores[i][j];
        }
        
        printf("시험 #%d의 최대 점수 = %d\n", j, max);
        printf("시험 #%d의 최소 점수 = %d\n", j, min);
    }

    return 0;
}