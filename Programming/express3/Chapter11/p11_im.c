// 2개의 정렬된 정수 배열 A[]와 B[], 2개의 배열을 합쳐서 하나의 정렬된 배열 C[]로 만드는
// 함수 작성후 테스트하자, 배열 A와 배열 B는 똑같은 크기로 정의 가정, 배열 C는 충분한
// 크기를 가졌다고 가정, A[0]와 B[0]을 비교후 A[0]이 B[0]보다 작으면 A[0]을 C[0]에
// 복사, 다음은 A[1]와 B[0]과 비교, B[0]이 A[1]보다 작으면 B[0]을 C[1]에 저장
// A[]나 B[]중 어느 하나가 먼저 끝나면 남은 요소 모두 C[]로 이동
#include <stdio.h>

void merge(int *A, int *B, int *C, int size);
void print_ary(int *C, int size);

int main(void)
{
    int A[4] = {2, 5, 7, 8};
    int B[4] = {1, 3, 4, 6};
    int C[10] = {0, };

    merge(A, B, C, 10);
    print_ary(C, 10);

    return 0;
}

void merge(int *A, int *B, int *C, int size)
{
    int i, a, b, c;
    for(a = 0, b = 0, c = 0; a < size && b < size;)
    {
        if (A[a] <= B[b]) 
        {
            C[c++] = A[a++];
        }
        else 
        {
            C[c++] = B[b++];
        }
    }
    for (i = a; i < size; i++)
    {
        C[c++] = A[i];
    }
    for (i = b; i < size; i++)
    {
        C[c++] = B[i];
    }
}

void print_ary(int *C, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");
}