// int형 배열과 int형 포인터를 받아서 포인터가 배열의 가장 큰 값을 가리키게 하는 함수
// set_max_ptr()을 구현후 테스트하자
#include <stdio.h>

void set_max_ptr(int m[], int size, int **pmax);

int main(void)
{
    int m[6] = {5, 6, 1, 3, 7, 9};
    int *pmax;      // 배열 m의 원소 중에서 가장 큰 값을 pmax가 가리킨다.

    set_max_ptr(m, 6, &pmax);

    return 0;
}

void set_max_ptr(int m[], int size, int **pmax)
{
    int i;
    *pmax = &m[0];

    for (i = 1; i < size; i++)
    {
        if (*pmax < &m[i])
            *pmax = &m[i];
    }

    printf("가장 큰 값은 %d\n", **pmax);
}