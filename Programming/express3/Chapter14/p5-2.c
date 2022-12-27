#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void get_arr(int *arr, int size);
void print_arr(int *arr, int size);
void set_max_ptr(int *arr, int size, int **pmax);

int main(void)
{
    int arr[10];
    int *pmax;
    int size;
    srand((unsigned)time(NULL));

    size = sizeof(arr) / sizeof(int);
    get_arr(arr, size);
    printf("== 배열에 저장된 값 == \n");
    print_arr(arr, size);

    set_max_ptr(arr, size, &pmax);
    printf("가장 큰 값은 = %d \n", *pmax);
    
    return 0;
}

void get_arr(int *arr, int size) 
{
    int i;
    for(i = 0; i < size; i++)
        arr[i] = rand() % 10;
}

void print_arr(int *arr, int size) 
{
    int i;
    for(i = 0; i < size; i++)
        printf("%d  ", arr[i]);
    printf("\n\n");
}

void set_max_ptr(int *arr, int size, int **pmax) 
{
    int i;
    *pmax = arr;        // 어차피 시작주소 == 인덱스[0];
    for(i = 1; i < size; i++) 
    {
        if(**pmax <= arr[i])
            **pmax = arr[i];
    }
}