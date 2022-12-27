// 학생들의 성적을 저장하고 있는 정수 배열 만들고 평균 계산하는 함수
#include <stdio.h>
#define STUDENTS 5

int get_average(int scores[], int size);

int main(void)
{
    int scores[STUDENTS] = {1, 2, 3, 4, 5};
    int avg;

    avg = get_average(scores, STUDENTS);
    printf("평균은 %d입니다.\n", avg);

    return 0;
}

int get_average(int scores[], int size)
{
    int i;
    int sum = 0;

    for (i = 0; i < size; i++)
    {
        sum += scores[i];
    }
    return sum / size;
}