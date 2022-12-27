// 직원들의 기본급 배열 A[]에 저장, 배열 B[]에는 직원들의 보너스 저장, 기본급과 보너스를
// 합하여 이번달 지급할 월급의 총액 계산, A[]와 B[]를 더해서 C[]에 저장함수 테스트
#include <stdio.h>

void array_add(int *A, int *B, int *C, int size);
void array_print(int *P, int size);

int main(void)
{
    int A[10] = {1, 2, 3, };
    int B[10] = {0, };
    int C[10];

    array_print(A, 10);
    array_print(B, 10);
    array_add(A, B, C, 10);
    printf("\n");

    return 0;
}

void array_add(int *A, int *B, int *C, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        C[i] = A[i] + B[i];
        printf("%d ", C[i]);
    }
}

void array_print(int *P, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", P[i]);
    }
    printf("\n");
}