#include <stdio.h>
#include <string.h>

void merge(int *A, int *B, int *C);
void print_C(int *A, int *B, int *C);

int main(void)
{
    int A[5] = {11, 13, 15, 17, 19};
    int B[5] = {22, 24, 26, 28, 30};
    int C[10] = {0, };

    merge(A, B, C);
    print_C(A, B, C);

    return 0;
}

void merge(int *A, int *B, int *C)
{
    int i;

    for (i = 0; i < 5; i++)
    {
        C[i] = A[i];
        C[i + 5] = B[i];
    }
}

void print_C(int *A, int *B, int *C)
{
    int i;

    printf("A[] = ");
    for (i = 0; i < 5; i++)
        printf("%3d ", A[i]);
    printf("\n");

    printf("B[] = ");
    for (i = 0; i < 5; i++)
        printf("%3d ", B[i]);
    printf("\n");

    printf("C[] = ");
    for (i = 0; i < 10; i++)
        printf("%3d ", C[i]);
    printf("\n");
}