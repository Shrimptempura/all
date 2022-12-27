// 2차원 배열에 정수가 저장되어 있다고 가정한다. 우리가 가지고 있는 단 하나의 함수는
// 1차원 배열에 저장된 정수의 합을 구하는 int get_sum(int array[], int size)라고 가정
// 2차원 배열의 각 행에 대하여 get_sum()을 호출하여서 각 행의 합을 구한 후에, 이것들을
// 모두 합쳐서 전체 2차원 배열에 저장된 정수들의 합을 구하는 프로그램 작성
#include <stdio.h>

int get_sum(int array[], int size);

int main(void)
{
    int i, j, sum = 0;
    int array[3][6];

    for (i = 0; i < 3; i++)
        for (j = 0; j < 6; j++)
            array[i][j] = 10;

    for(i = 0; i < 3; i++)
        sum += get_sum(array[i], sizeof(array[i]) / sizeof(array[i][0]));

    printf("정수의 합 : %d\n", sum);

    return 0;
}

int get_sum(int array[], int size)
{
    int sum = 0;
    int i;
    for (i = 0; i < size; i++)
        sum += array[i];

    return sum;
}