#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
    char str[80];
    char ctr1[20];
    char ctr2[20];
    char *token;
    char *word = " ";
    char *context[50];

    int i, count = 0;

    printf("문자열을 입력하시오: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = NULL;

    printf("찾을 문자열: ");
    fgets(ctr1, sizeof(ctr1), stdin);
    ctr1[strlen(ctr1)-1] = NULL;

    printf("바꿀 문자열: ");
    fgets(ctr2, sizeof(ctr2), stdin);
    ctr2[strlen(ctr2)-1] = NULL;

    token = strtok(str, word);
    for(i=0; token != NULL; i++) 
    {
        context[i] = token;
        token = strtok(NULL, word);
        count++;
    }

    for(i=0; i<count; i++)
        if(!strcmp(ctr1, context[i]))
            context[i] = ctr2;

    printf("결과: ");
    for(i=0; i<count; i++)
        printf("%s ", context[i]);
    printf("\n");

    return 0;
}