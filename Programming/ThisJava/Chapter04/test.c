#include <stdio.h>

int main(void)
{
    for (int x = 1; x <= 5; x++)
    {
        for (int y = 1; y <=5; y++)
            printf("*");
        printf("\n");
    }
    return 0;
}