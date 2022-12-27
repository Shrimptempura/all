// 간단한 "찾아바꾸기" 기능 구현, 첫번째로 사용자에게 최대 80문자의 문자열을 입력도록 함
// 두 번째로 찾을 문자열 입력, 세 번째로 문자열을 입력받는다. 문자열을 찾아서 바꾼 후에
// 결과 문자열 출력
#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[80];
    char *token;
    char Fstring[80];
    char Cstring[80];
    int i, count = 0;
    char *text[10];

    printf("문자열을 입력하시오 : ");
    gets(string);

    printf("찾을 문자열 : ");
    gets(Fstring);

    printf("바꿀 문자열 : ");
    gets(Cstring);

    token = strtok(string, " ");

    for (i = 0; token != NULL; i++)
    {
        text[i] = token;
        token = strtok(NULL, " ");
        count++;
    }

    for (i = 0; i < count; i++)
    {
        if (strcmp(Fstring, text[i]) == 0)
            text[i] = Cstring;
    }

    printf("수정된 문자열 : ");
    for (i = 0; i < count; i++)
    {
        printf("%s ", text[i]);
    }
    printf("\n");


    return 0;
}