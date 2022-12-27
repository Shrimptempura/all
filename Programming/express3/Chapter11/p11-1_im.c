#include <stdio.h>
#define SIZE 4

void merge(int *A, int *B, int *C, int size);
void printf_merge(int *P, int size);

int main(void)
{
    int A[SIZE] = {2, 5, 7, 8};
    int B[SIZE] = {1, 3, 4, 6};
    int C[SIZE * 2] = {0};

    merge(A, B, C, SIZE);

    printf_merge(A, SIZE);
    printf_merge(B, SIZE);
    printf_merge(C, SIZE * 2);

    return 0;
}

void merge(int *A, int *B, int *C, int size) 
{
    int i, j = 0, k = 0;

    for(i = 0; i < size * 2; i++) 
	{
        if(j < size && k < size) 
		{
            if(A[j] <= B[k]) 
			{
                C[i] = A[j];
                j++;
            }
            else 
			{
                C[i] = B[k];
                k++;
            }
        }
        else 
		{
            if(j == size) 
			{
                C[i] = B[k];
                k++;
            }
            else 
			{
                C[i] = A[j];
                j++;
            }
        }
    }
}

void printf_merge(int *P, int size) 
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", P[i]);
    printf("\n");
}