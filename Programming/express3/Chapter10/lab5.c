// 원본 배열의 변경, 1차원 배열을 조작하는 함수의 예
#include <stdio.h>
#define SIZE 7

void modify_ary(int a[], int size);
void print_ary(int a[], int size);

int main(void)
{
    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7};

    print_ary(list, SIZE);
    modify_ary(list, SIZE);
    print_ary(list, SIZE);

    return 0;
}

void modify_ary(int a[], int size)
{
    int i;

    for (i = 0; i < SIZE; i++)
        ++a[i];
}

void print_ary(int a[], int size)
{
    int i;

    for (i = 0; i < SIZE; i++)
        printf("%3d ", a[i]);
    printf("\n");
}