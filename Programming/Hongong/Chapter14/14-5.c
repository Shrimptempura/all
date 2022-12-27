// 2개의 반 3명 학생의 4과목 점수를 저장하는 3차원 배열
#include <stdio.h>

int main(void)
{
    int score[2][3][4] = {      // 2개의 반 세명의 4과목 점수 저장
        { { 72, 80, 95, 60 }, { 68, 98, 83, 90 }, { 75, 72, 84, 90 } },
        { { 66, 85, 90, 88 }, { 95, 92, 88, 95 }, { 43, 72, 56, 75 } }
    };

    int i, j, k;

    for (i = 0; i < 2; i++)     // 반 수만큼 반복
    {
        printf("%d반 점수...\n", i + 1);    // 반이 바뀔 때마다 출력
        for (j = 0; j < 3; j++)             // 학생 수만큼 반복
        {
            for (k = 0; k < 4; k++)         // 과목 수만큼 반복
            {
                printf("%5d", score[i][j][k]);      // 점수 출력
            }
            printf("\n");       // 한 학생의 점수를 출력하고 줄 바꿈
        }
        printf("\n");           // 한 반의 점수를 출력하고 줄 바꿈
    }

    return 0;
}