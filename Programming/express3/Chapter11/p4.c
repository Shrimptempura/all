// 정수 배열의 요소드를 화면에 출력하는 함수를 작성하고 테스트하라.
#include <stdio.h>

void array_print(int *A, int size);

int main(void)
{
    int A[10] = {1, 2, 3, 4, };
    array_print(A, 10);

    return 0;
}

void array_print(int *A, int size)
{
    int i;
    printf("A[] = { ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("}\n");
}