// 문자열을 받아서 문자열에 포함된 문자를 대문자로 변환하는 함수 str_upper(char *s) 작성
#include <stdio.h>
#include <string.h>

void str_upper(char *s);

int main(void)
{
    char s[100];

    
    printf("문자열을 입력하시오 : ");
    gets(s);

    str_upper(s);
    printf("변환된 문자열 : ");
    puts(s);

    return 0;
}

void str_upper(char *s)
{
    int i;

    for (i = 0; s[i] != NULL; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }
}