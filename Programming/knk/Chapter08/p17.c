#include <stdio.h>

int main(void)
{
    int num, i, j;
    int x, y;

    printf("This program creates a magic square of a specified size\n");
    printf("The size must be an odd number berween 1 and 99\n");
    printf("Enter size of magic square : ");
    scanf("%d", &num);

    int magic[num][num];
    
    x = 0;
    y = num / 2;
    i = 1;

    while (i <= num * num)
    {
        magic[x][y] = i;
        if (i % num == 0)
            x++;
        else
        {
            x--;
            y--;
            if (x < 0)
                x = num - 1;
            if (y < 0)
                y = num - 1;
        }
        i++;
    }

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            printf("%5d", magic[i][j]);
        }
        printf("\n");
    }

    return 0;
}