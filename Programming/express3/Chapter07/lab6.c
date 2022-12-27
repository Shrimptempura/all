// 사용자로부터 알파벳 소문자를 받아서 대문자로 바꾸는 프로그램, 만약 소문자가 아니면
// 사용자로부터 다시 문자를 받는다.(이때 coutinue), 대문자 Q입력시 반복 종료
#include <stdio.h>
    // - 32
int main(void)
{
    char ch;
    while(ch != 'Q')
    {
        printf("소문자를 입력하세요 : ");
        scanf("%c", &ch);
        getchar();

        if (ch < 'a' || ch > 'z')
            continue;

        printf("변환된 대문자는 %c입니다.\n", ch - 32);
        
    }

    return 0;
}

