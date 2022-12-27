// 2개의 정수 배열 a, b을 받아서 배열 a의 요소를 배열 b로 복사하는 함수 ary_copy(
// int a[], int b[], int size)를 작성하고 테스트해라, 이 함수의 반환값은 없다.
#include <stdio.h>

void ary_copy(int a[], int b[], int size);

int main(void)
{
    int a[10] = {1, 2, 3};
    int b[10];
    int i, size;

    size = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");

    ary_copy(a, b, size);

    return 0;
}
void ary_copy(int a[], int b[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        b[i] = a[i];
        printf("%d ", b[i]);
    }
    printf("\n");
}

// <밑 코드는 초기 코드.. 줄일수 있다. 윗 참조>

// void ary_copy(int a[], int b[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//     {
//         b[i] = a[i];
//     }

//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", b[i]);
//     }
//     printf("\n");
// }