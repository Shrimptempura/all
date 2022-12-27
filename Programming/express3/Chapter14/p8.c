// 크기가 3 * 3인 2차원 배열을 다른 2차원 배열로 복사하는 함수 void array_copy
// (int src[][WIDTH], int dst[][WIDTH])를 구현하고 테스트하자, 수행 속도를 위하여
// 배열 첨자 방법 대신에 포인터를 사용해보자
#include <stdio.h>
#define WIDTH 3

void array_copy(int src[][WIDTH], int dst[][WIDTH]);
void origin_ary(int ori[][WIDTH]);

int main(void)
{
    int src[3][WIDTH] = {
        {100, 30, 67},
        {89, 50, 12},
        {19, 60, 90},
    };
    int dst[3][WIDTH];

    printf("<원본 2차원 배열>\n");
    origin_ary(src);
    printf("\n");

    printf("<복사본 2차원 배열>\n");
    array_copy(src, dst);

    return 0;
}

void array_copy(int src[][WIDTH], int dst[][WIDTH])
{
    int i, j;
    int *p;

    p = &src[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < WIDTH; j++)
        {
            dst[i][j] = *p;
            printf("%d ", dst[i][j]);
            p++;
        }
        printf("\n");
    }
}

// void array_copy(int src[][WIDTH], int dst[][WIDTH]) 
// {
// 	int *p = &src[0][0];
// 	int *end = &src[3-1][WIDTH-1];
// 	int *q = &dst[0][0];

// 	while(p <= end) 
// 		*q++ = *p++;
// }

void origin_ary(int ori[][WIDTH])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", ori[i][j]);
        }
        printf("\n");
    }
}