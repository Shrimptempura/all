#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char str[100];
    char word[] = " ";
    char *token;
    char *context[10];
    int i, count = 0;

    printf("문자열을 입력하시오: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = NULL;

    token = strtok(str, word);

    for(i = 0; token != NULL; i++) 
    {
        context[i] = token;
        token = strtok(NULL, word);
        count++;
    }

    printf("출력문자열: ");
    for(i = 0; i < count; i++)
        printf("%s ", context[count -i - 1]);
    printf("\n");

    return 0;
}