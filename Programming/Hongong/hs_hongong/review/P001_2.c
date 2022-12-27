#include <stdio.h>

int main(void)
{
    char ch;

    printf("문자를 입력하시오 : ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch < 'Z')
        printf("대문자입니다.\n");
    
    else if (ch >= 'a' && ch < 'z')
        printf("소문자입니다.\n");

    else if (ch >= 48 && ch < 67)
        printf("숫자입니다.\n");
    
    else
        printf("기타 문자입니다.\n");

    return 0;
}