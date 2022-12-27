// 직원들의 월급이 배열 A[]에 저장되어 있다. 이번달 회사에서 지급할 월급의 총액 계산하고자
// 정수형 배열 요소들의 합을 구하여 반환하는 함수를 작성하고 테스트하자
#include <stdio.h>

int array_sum(int *A, int size);

int main(void)
{
    int A[10] = {1, 2, 3, };

    printf("월급의 합 = %d\n", array_sum(A, 10));

    return 0;
}

int array_sum(int *A, int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += A[i];
    }

    return sum;
}