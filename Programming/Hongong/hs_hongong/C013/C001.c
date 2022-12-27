#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_array(int arr[][3]);
void print_array(int arr[][3]);
void print_sum(int arr[][3]);
void transpose(int arr1[][3], int arr2[][3]);

int main(void)
{
    int arr1[3][3];
    int arr2[3][3];

    init_array(arr1);
    print_array(arr1);
    print_sum(arr1);
    transpose(arr1, arr2);
    print_array(arr2);

    return 0;
}

void init_array(int arr[][3])
{
    srand((unsigned int)time(NULL));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            arr[i][j] = rand() % 100 + 1;
    }
}

void print_array(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%3d", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

void print_sum(int arr[][3])
{
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            sum += arr[i][j];
        printf("%d 행의 합: %d\n", i, sum);
        sum = 0;
    }
    printf("\n");
}

void transpose(int arr1[][3], int arr2[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            arr2[i][j] = arr1[j][i];
    }
}