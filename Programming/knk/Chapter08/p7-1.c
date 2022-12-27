#include <stdio.h>
#define NUM 5

int main(void)
{
    int ary[NUM][NUM];
    int i, j, sum;

    for (i = 0; i < NUM; i++)
    {
        printf("Enter row %d : ", i + 1);
        for (j = 0; j < 5; j++)
            scanf("%d", &ary[i][j]);
    }

    printf("Row totlas : ");
    for (i = 0; i < NUM; i++)
    {
        sum = 0;
        for (j = 0; j < NUM; j++) 
            sum += ary[i][j];
        printf("%d ", sum);
    }
    printf("\n");

    printf("Colum totals : ");
    for (i = 0; i < NUM; i++)
    {
        sum = 0;
        for (j = 0; j < NUM; j++)
            sum += ary[j][i];
        printf("%d ", sum);
    }
    printf("\n");

    return 0;
}