// 전달한 문자가 알파벳인지 검사하는 함수 check_alpha를 작성하고 호출하여 사용자가
// 입력한 문자가 알파벳('a' ~ 'z'까지) 판단하여 출력하는 프로그램
#include <stdio.h>

char check_alpha(char ch);

int main(void)
{
    char ch, x;

    printf("문자를 입력하시오 : ");
    ch = getchar();

    check_alpha(ch);

    return 0;
}

char check_alpha(char ch)
{
    if(ch >= 97 && ch <= 122)
        return printf("%c는 알파벳 문자입니다.\n", ch);
    else
        return printf("%c는 알파벳 문자가 아닙니다.\n", ch);
}