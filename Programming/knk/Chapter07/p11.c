#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[128];
    char *ptr;
    char *context[32];
    int i = 0;

    printf("Enter a first and last name : ");
    gets(str);

    ptr = strtok(str, " ");

    while (ptr != NULL)
    {
        context[i] = ptr;
        ptr = strtok(NULL, " ");
        i++;
    }

    printf("%s, %s.\n", context[1], context[0]);

    return 0;
}