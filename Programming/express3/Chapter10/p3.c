// 2개의 정수 배열 a, b을 받아서 대응하는 배열 요소가 같은지 검사, 전체가 같으면 1 반환
// 아니면 0 반환
#include <stdio.h>

int ary_copy(int a[], int b[], int size);

int main(void)
{
    int a[10] = {1, 2, 3};
    int b[10] = {1, 2, 3, 1};
    int i, size;

    size = sizeof(a) / sizeof(a[0]);
    ary_copy(a, b, size);
    if (ary_copy(a, b, size) == 1)
        printf("2개의 배열은 같음\n");
    else
        printf("2개의 배열은 다름\n");
    
    return 0;
}

int ary_copy(int a[], int b[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if(a[i] != b[i])
            return 0;
    }
    return 1;
}