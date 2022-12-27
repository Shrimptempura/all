// 1. 선택정렬
#include <stdio.h>

int main(void)
{
    int data[5];
    int temp;
    int min, i, j;

    for (i = 0; i < 5; i++) {
        scanf("%d", &data[i]);
    }

    for (i = 0; i < 4; i++)
    {
        min = i;
        for (j = i + 1; j < 5; j++)
        {
            if (data[min] > data[j])
                min = j;
        }
        if (min != i)
        {
            temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
    }

    for (i = 0; i < 5; i++)
        printf("%d ", data[i]);
    printf("\n");

    return 0;
}