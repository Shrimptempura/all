// 사용자에게 영어 이름을 성과 이름으로 나누어서 대문자로 입력하도록 하여, 성과 이름의 
// 위치를 바꾸고 소문자로 변환하여 출력하는 프로그램 작성
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char name[200];
    char *text[100];
    char *token;
    int i = 0, count = 0;

    printf("성과 이름을 대문자로 입력하시오 : ");
    gets(name);

    for (i = 0; i < strlen(name); i++)
    {
        name[i] = tolower(name[i]);
    }

    token = strtok(name, " ");

    for (i = 0; token != NULL; i++)
    {
        text[i] = token;
        token = strtok(NULL, " ");
        count++;
    }

    for (i = 0; i < count; i++)
    {
        printf("%s ", text[count -i -1]);
    }
    printf("\n");

    return 0;
}