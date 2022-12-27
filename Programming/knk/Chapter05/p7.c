#include <stdio.h>

int main(void)
{
    int num[4];
    int small, large, i;

    printf("Enter four integers : ");
    scanf("%d %d %d %d", &num[0], &num[1], &num[2], &num[3]);
                            // 2 4 1 3
    small = num[0];     // small = large = num[0];
    for (i = 0; i < 3; i++)
    {
        if (small > num[i + 1])
            small = num[i + 1];
    }

    large = num[0];
    for (i = 0; i < 3; i++)
    {
        if (large < num[i + 1])
            large = num[i + 1];
    }

    printf("Largest : %d\n", large);
    printf("Smallest : %d\n", small);

    return 0;
}