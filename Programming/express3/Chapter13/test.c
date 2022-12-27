#include <stdio.h>
#include <string.h>

void asc(char *pary);

int main(void)
{
    char pary[10][10];
    int i, j;

    for (i = 0; i < 10; i++)
    {
        gets(pary[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("%s ", pary[i]);
    }

    asc(*pary);

    return 0;
}

void asc(char *pary)
{
    int i, j;
    char num_ary[10] = {0};

    for (i = 0; i < 10; i++)
    {
        strcpy(num_ary[i], pary[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("%c ", pary[i]);
    }
}