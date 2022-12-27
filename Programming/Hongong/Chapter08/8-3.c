// sizeof 연산자를 활용한 배열 처리
// 배열 요소의 개수 구하기 => sizeof(배열명) / sizeof(배열 요소)

#include <stdio.h>

int main(void)
{
    int score[5];
    int i;
    int total = 0;
    double avg;
    int count;      // 배열 요소의 개수를 저장할 변수

    count =  sizeof(score) / sizeof(score[0]);      // 배열 요소의 개수 계산, 
// 배열 요소의 개수(5) = 배열 전체 크키(20바이트) / 배열 요소 하나의 크기(4바이트)
    for (i = 0; i < count; i++)     // 14행에서 계산한 count만큼 반복
    {
        scanf("%d", &score[i]);
    }

    for (i = 0; i < count; i++)
    {
        total += score[i];
    }
    avg = total / (double)count;        // 총합을 count로 나누어 평균 계산

    for (i = 0; i < count; i++)
    {
        printf("%5d", score[i]);
    }
    printf("\n");

    printf("평균 : %.lf\n", avg);

    return 0;
}