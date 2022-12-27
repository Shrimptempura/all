#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *string[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        string[i] = (char *)malloc(100 * sizeof(char));
        if (string[i] == NULL)
        {
            printf("동적 메모리 오류\n");
            exit(EXIT_FAILURE);
        }
        strcpy(string[i], "test string");
    }

    for (i = 0; i < 10; i++)
    {
        printf("문자열 %d : %s\n", i, string[i]);
    }

    // for (i = 0; i < 10; i++)
    // {
    //     free(string[i]);
    // }

    return 0;
}