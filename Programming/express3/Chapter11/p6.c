// 정수 배열 A[]를 다른 정수 배열 B[]에 복사하는 함수를 작성하고 테스트하기
#include <stdio.h>

void array_copy(int *A, int *B, int size);
void array_print(int *p, int size);

int main(void)
{
    int A[10] = {1, 2, 3, };
    int B[10] = {0, };

    array_print(A, 10);
    printf("\n");
    array_copy(A, B, 10);
    printf("\n");

    return 0;
}

void array_copy(int *A, int *B, int size)
{
    int i;
    printf("복사한 B배열 : ");
    for (i = 0; i < size; i++)
    {
        B[i] = A[i];
        printf("%d ", B[i]);
    }
}

void array_print(int *p, int size)
{
    int i;
    printf("A배열 : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", p[i]);
    }
}