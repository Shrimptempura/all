// 학생들의 성적이 scores라는 2차원 배열에 저장되어 있다고 가정한다. scores의 행은
// 한 학생에 대한 여러번의 시험 성적을 나타낸다. scores의 열은 한 시험에 대한 여러
// 학생들의 성적이다. 학생별로 성적의 평균을 구하려고 한다. 2차원 배열의 각 행이
// 1차원 배열임을 이용하여 다음과 같이 1차원 배열의 평균을 구하는 함수 get_average()를
// 호출하여 각 학생에 대한 평균 성적을 계산하자.
#include <stdio.h>

double get_average(int list[], int n);

int main(void)
{
    int scores[5][3];
    int i, j, avg;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            printf("학생%d의 성적 : ", i + 1);
            scanf("%d %d %d", &scores[i][0], &scores[i][1], &scores[i][2]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        avg = get_average(scores[i], 3);
        printf("학생%d의 평균값 = %d\n", i + 1, avg);
    }

    return 0;
}

double get_average(int list[], int n)
{
    int sum = 0;
    int i;

    for (i = 0; i < n; i++)
        sum += list[i];

    return sum / n;
}