#include <stdio.h>
#include <string.h>

void print_arr(int array[][6], int row, int col);
int get_sum(int array[], int size);

int main() 
{
    int arr[3][6] = {{10,10,10,10,10,10},
        {10,10,10,10,10,10},
        {10,10,10,10,10,10}
    };
    int i, sum = 0;
    
    print_arr(arr, 3, 6);

    for(i = 0; i < 3; i++)
        sum += get_sum(arr[i], sizeof(arr[i]) / sizeof(arr[i][0]));
    
    printf("size의 크기 : %lu\n", sizeof(arr[0]) / sizeof(arr[0][0]));
    printf("arr[3][6]의 전체 저장된 정수들의 합 : %d \n", sum);

    return 0;
}

void print_arr(int array[][6], int row, int col) 
{
    int i, j;
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 6; j++) 
            printf("%3d", array[i][j]);
        printf("\n");
    }
    printf("\n");
}

int get_sum(int array[], int size) 
{
    int i, sum = 0;
    for(i = 0; i < size; i++)
        sum += array[i];
    return sum;
}

