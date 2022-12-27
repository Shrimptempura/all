// 문자열 안에 포함된 특정한 문자의 개수를 세는 함수 int str_chr(char *s, int c) 작성
// s는 문자열, c는 개수를 셀 문자이다.
#include <stdio.h>
#include <string.h>

int str_chr(char *s, int c);

int main(void)
{
    char str[] = "";
    int c;

    printf("문자열을 입력하시오 : ");
    gets(str);

    printf("개수를 셀 문자를 입력하시오 : ");
    c = getchar();

    printf("%c의 개수 : %d\n", c, str_chr(str, c));

    return 0;
}

int str_chr(char *s, int c)
{
    int i;
    int count = 0;

    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
            count++;
    }

    return count;
}