#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char num;

    printf("문자를 입력하시오 : ");
    scanf("%c", &num);
    // getchar();

    if (isupper(num))
        printf("대문자입니다.\n");
    
    else if (islower(num))
        printf("소문자입니다.\n");

    else if (isdigit(num))
        printf("숫자입니다.\n");
    
    else
        printf("기타 문자입니다.\n");

    return 0;
}