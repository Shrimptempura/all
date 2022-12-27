// 5명의 학생과 5개의 퀴즈의 점수를 입력 받아 각 학생들의 퀴즈 총 합과 평균, 
// 그리고 각 퀴즈마다 가장 큰 점수, 가장 작은 점수를 출력
// 문제 잘못 읽음, 한 학생달 5개의 문제를 받아야함.. p8-1.c 서술
#include <stdio.h>
#define NUM 5

int main(void)
{
    int i, sum = 0;
    double avg;
    int small, large;

    int ary[NUM];

    for (i = 0; i < NUM; i++)
    {
        printf("%d번째 학생의 점수 : ", i + 1);
        scanf("%d", &ary[i]);
        sum += ary[i];
    }

    avg = sum / NUM;
    large = small = ary[0];
    // small; large;
    for (i = 1; i < NUM; i++)
    {
        if (small > ary[i])
            small = ary[i];
        if (large < ary[i])
            large = ary[i];
    }

    printf("학생들의 총합 : %d\n", sum);
    printf("학생들의 평균 : %.2lf\n", avg);
    printf("학생들 중 가장 작은 점수 : %d\n", small);
    printf("학생들 중 가장 큰 점수 : %d\n", large);

    return 0;
}