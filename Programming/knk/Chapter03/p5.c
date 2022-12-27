// 귀찮아서 넘김 ㅅㄱ
#include <stdio.h>

int main(void)
{
    int i, j;
    int num[16];
    int row[4];
    int col[4];

    printf("Enter the numbers from 1 to 16 in any order\n");

    for (i = 0; i < 16; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("\n");
    
    for (i = 0; i < 16; i++)
    {
        printf("%d ", num[i]);
        if ((i % 4 == 3) && (i != 0))
            printf("\n");
    }
    printf("\n");

    for (i = 1; i <= 4; i = i * 4)
    {
        for(j = 0; j < 4; j++)
        {
            row[j] = num[i - 1] + num[i] + num[i + 1] + num[i + 2];
        }
    }

    printf("Row sums : %d %d %d %d\n", row[0], row[1], row[2], row[3]);

    return 0;
}