#include <stdio.h>
// row : 가로, col : 세로;
// 너무 길어졌음, 입력말고 출력을 total로 하는게 어떻까
// p7-1.c 참고
int main(void)
{
    int ary[5][5];
    int i, j;
    int row[5] = {0, }, col[5] = {0, };

    for (i = 0; i < 5; i++)
    {
        printf("Enter row %d : ", i + 1);
        for (j = 0; j < 5; j++)
            scanf("%d", &ary[i][j]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            row[i] += ary[i][j];
            col[i] += ary[j][i];
        }
    }

    printf("Row totlas : ");
    for (i = 0; i < 5; i++)
        printf("%d ", row[i]);

    printf("\n");
    printf("Colum totlas : ");
    for (i = 0; i < 5; i++)
        printf("%d ", col[i]);
    printf("\n");

    return 0;
}