// 문자열을 사용자로부터 받아서, 영어의 대문자는 소문자로, 소문자는 대문자로 변환 출력
// 프로그램, getchar()이용 키보드로 입력받으며, 입력받은 문자가 소-대, 대-소 변환하여
// putchar()이용 출력, 만약 영어 알파벳 범위가 벗어나면 경고메시지 출력
// '.'입력시 프로그램 종료
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char ch;

    while (1)
    {
        printf("문자를 입력하시오 : ");
        ch = getchar();
        getchar();

        if (ch == '.')
            break;
        
        if (isalpha(ch))
        {
            if (isupper(ch))
            {
                putchar(tolower(ch));
                printf("\n");
            }
            else
            {
                putchar(toupper(ch));
                printf("\n");
            }
        }
        else
            printf("영어 알파벳이 아닙니다.\n");
    }

    return 0;
}