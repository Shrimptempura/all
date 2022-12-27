// 키보드에서 하나의 문자를 읽어서 모음과 자음을 구분하는 프로그램 작성하자.(swithch사용)
#include <stdio.h>

int main(void)
{
    char ch;

    printf("문자를 입력하세요 : ");
    ch = getchar();

    switch(ch)      // aeiou
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("모음입니다.\n"); break;

        default: printf("자음입니다.\n"); break;
    }
    
    return 0;
}