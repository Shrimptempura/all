// 회문 검사 프로그램
#include <stdio.h>
#include <string.h>

char palindrome (char *s);

int main(void)
{
    char s[30];

    printf("문자열을 입력하시오 : ");
    gets(s);

    if (palindrome(s) == 1)
        printf("회문입니다.\n");
    else
        printf("회문이 아닙니다.\n");

    return 0;
}

char palindrome (char *s)
{
    int i = 0;
    int j = 1;

    while (i != (strlen(s) / 2))
    {
        if (!(s[i] == s[strlen(s) - j]))
            return 0;
        j++;
        i++;
    }
    return 1;
}

    // for (i = 1; i <= (strlen(s) / 2); i++)
    // {
    //     if (!s[i] == s[strlen(s) - j])
    //     ;   
    // }