// c가 공백문자(탭, 스페이스, 줄바꿈 문자)이면 참이 되는 매크로 IS_SPACE(c)를 정의
// 하여 사용자가 입력한 문자열 중에서 공백 문자의 개수를 출력해 보자
#include <stdio.h>
#define IS_SPACE(c) ((c) == '\t' || (c) == '\n' || (c) == ' ')

int main(void)
{
    char ary[64];
    int i = 0, count = 0;
    
    printf("문자열을 입력 하시오 : ");
    gets(ary);

    while (ary[i] != NULL)
    {
        if(IS_SPACE(ary[i]))
            count++;
        i++;
    }

    printf("공백 문자의 개수 : %d\n", count);

    return 0;
}