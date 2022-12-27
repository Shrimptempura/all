#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int *str[] = {0};
    int i, j;
    int num;
    int **ary;
    *ary = str;

    printf("양수 입력 : %d", num);
    scanf("%d", &num);

    ary = (int *)malloc(sizeof(int *) * (num / 5));
    for (i = 0; i < (num / 5); i++)
    {
        ary[i] = (int *)malloc(sizeof(int *) * (num % 5));
    }

    for (i = 0; i < (num / 5); i++)
    {
        for (j = 0; j < (num % 5); j++)
        {
            printf("%d", str[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < (num / 5); i++)
    {
        free(ary[i]);
    }
    free(ary);

    return 0;
}

