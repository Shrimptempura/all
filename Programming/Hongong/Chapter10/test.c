#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)  
{
    int i;
    int random[6];

    srand((unsigned int)time(NULL));
    for (i = 0; i < 6; i++)
    {
        random[i] = rand() % 45 + 1;
        printf("%d  ", random[i]);
    }
    printf("\n");

    return 0;
}