#include <stdio.h>

int main(void)
{
    char ary[20] = {0 ,};
    int i = 0, j;

    printf("enter num : ");
    while ((ary[i] = getchar()) != '\n')
    {
        i++;
    }

    return 0;
}