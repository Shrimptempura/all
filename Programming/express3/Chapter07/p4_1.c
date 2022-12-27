#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, k = 0, num;
    
    printf("몇층을 원하세요? ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        for (k = 1; k < num - i; k++)
        {
            printf(" ");
        }
        for (j = 0; j < i + 1; j++)
            printf("*");
        printf("\n");
    }
}
