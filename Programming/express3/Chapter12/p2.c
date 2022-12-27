// 문자열을 입력으로 받아서 문자열에 포함된 모든 공백 문자를 삭제하는 함수작성 및 테스트
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    char seps[] = " ";
    char *token;
    printf("공백 문자가 있는 문자열을 입력하시오 : ");
    gets(str);

    token = strtok(str, seps);

    while (token != NULL)
    {
        printf("%s", token);
        token = strtok(NULL, seps);
    }
    printf("\n");

    return 0;
}