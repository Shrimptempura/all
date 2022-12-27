// 전형적인 동적 메모리 할당 코드
// int *p;
// p = (int *)malloc(sizeof(int));     // 1) 동적 메모리 할당
// *p = 1000;
// free(p);

#include <stdio.h>
#include <stdlib.h>s
#define SIZE 10

int main(void)
{
    int *p;

    p = (int *)malloc(SIZE * sizeof(int));
    if (p == NULL)
    {
        fprintf(stderr, "메모리가 부족해서 할당할 수 없습니다.\n");
        EXIT_FAILURE;   // exit(1);
    }

    for (int i = 0; i < SIZE; i++)
        p[i] = i;

    for (int i = 0; i < SIZE; i++)
        printf("%d ", p[i]);
    free(p);

    return 0;
}