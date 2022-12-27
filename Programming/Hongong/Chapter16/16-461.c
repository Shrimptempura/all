#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *max;
    int *max = (int *)malloc(sizeof(int));
    if (max == NULL)    // 또는 max == 0
    {
        printf("메모리가 부족합니다. ");
        return 1;
    }
    *max = 999;
    free(max);

    return 0;
}