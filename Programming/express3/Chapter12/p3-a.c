#include <string.h>
#include <stdio.h>
#define SIZE 100

int str_chr(char *s, int c)
{
    int i;
    int count = 0;
    for(i = 0; i < strlen(s); i++)
    {
        if(s[i] == c )
        count++;
    }
    return count;
}

int main(void)
{
    char str[SIZE];
    char ch;

    printf("문자열을 입력하시오: ");
    gets(str);

    printf("개수를 셀 문자를 입력하시오: ");
    ch = getchar();
    printf("%c의 개수: %d \n", ch, str_chr(str, ch));

    return 0;
}