// 정수 배열을 받아서 요소들을 난수로 채우는 함수를 작성 및 테스트
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_fill(int *A, int size);

int main(void)
{
    srand((unsigned)time(NULL));
    int x;

    printf("배열의 요소 크기 정하기 : ");
    scanf("%d", &x);

    int ary[x];

    array_fill(ary, x);
    printf("\n");

    return 0;
}

void array_fill(int *A, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        A[i] = rand() % 10000;
        printf("%d ", A[i]);
    }
}