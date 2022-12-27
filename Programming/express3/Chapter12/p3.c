// 문자열 안에 포함된 특정한 문자의 개수를 세는 함수 int str_chr(char *s, int c) 작성
// s는 문자열, c는 개수를 셀 문자이다.
#include <stdio.h>
#include <string.h>

int str_chr(char *s, int c);    // int c의 이유, strchr()의 원형은 문자비교를
                                // 아스키코드로 비교함
int main(void)
{
    char s[] = "";
    char c;

    printf("문자열을 입력하시오 : ");
    gets(s);

    printf("개수를 셀 문자를 입력하시오 : ");
    c = getchar();

    str_chr(s, c);

    return 0;
}

int str_chr(char *s, int c)
{
    char *p;
    int count = 0;
    int i;
    p = strchr(s, c);

    while (p != NULL)
    {
        if(p != NULL)
        {
            count++;
        }   
        p = strchr(p + 1, c);
    }

    if (count == 0)
        return printf("%c의 개수 : %d\n", c, count);
    else
        return printf("%c의 개수 : %d\n", c, count);
}