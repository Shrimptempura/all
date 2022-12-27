#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_init(int *A, int size);
void array_print(int *A, int size);
void array_copy(int *B, int *A, int size);

int main(void)
{
    int array1[5] = {0, };
    int array2[5] = {0, };

    array_init(array1, 5);
    array_print(array1, 5);
    array_copy(array2, array1, 5);
    array_print(array2, 5);

    return 0;
}

void array_init(int *A, int size)
{
    // 정수 배열을 1~100 사이의 5개의 난수로 채우는 함수 작성
    int i;
    srand((unsigned int)time(NULL));
    
    for (i = 0; i < size; i++)
        A[i] = (rand() % 100) + 1;
}

void array_print(int *A, int size)
{
    // 배열의 요소를 출력하는 함수 작성
    int i;

    for (i = 0; i < size; i++)
        printf("%3d ", A[i]);
    printf("\n");
}

void array_copy(int *B, int *A, int size)
{
    // 배열 A를 다른 정수 배열 B에 복사하는 함수 작성
    int i;

    for (i = 0; i < size; i++)
        B[i] = A[i];
}