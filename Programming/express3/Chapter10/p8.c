// 사용자가 입력하는 10개의 실수 자료의 평균과 표준 편차를 계산하는 프로그램 작성하기
// 자료들은 난수를 생성한다.(정수로 생성해서 실수로 변환)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
    srand((unsigned)time(NULL));

    int i, sum = 0;
    int scores[10];
    double avg, standard = 0;

    for (i = 0; i < 10; i++)
    {
        printf("데이터를 입력하시오 : ");
        scanf("%d", &scores[i]);
        sum += scores[i];
    }   
    avg = sum / 10;

    for (i = 0; i < 10; i++)
    {
        standard += pow((scores[i] - avg), 2.0);
    }
    standard /= 10;

    standard = sqrt(standard);

    printf("평균값은 %lf입니다.\n", avg);
    printf("표준편차 값은 %lf입니다.\n", standard);

    return 0;
}