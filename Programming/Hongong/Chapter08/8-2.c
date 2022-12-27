// 배열과 반복문을 사용한 성적 프로그램
#include <stdio.h>

int main(void)
{
    int score[5];       // 다섯 과목의 성적을 입력할 int형 배열 선언
    int i;              // 반복 제어 변수
    int tot = 0;
    double avg;

    for (i = 0; i < 5; i++)     // i가 0부터 4까지 5번 반복
    {
        scanf("%d", &score[i]); // 각 배열 요소에 성적 입력
    }

    for (i = 0; i < 5; i++)
    {
        tot += score[i];        // 성적을 누적하여 총점 계산(tot += s  ->  tot = tot + s)
    }
    avg = tot / 5.0;

    for (i = 0; i < 5; i++)     
    {
        printf("%5d", score[i]);    // 성적 출력
    }
    printf("\n");

    printf("평균 : %.lf\n", avg);   // 평균 출력

    return 0;
}