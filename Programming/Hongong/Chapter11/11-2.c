// 공백이나 제어 문자의 입력
#include <stdio.h>

int main(void)
{
    char ch1, ch2;

    scanf(" %c   %c", &ch1, &ch2);   // %c 공백 %c 일시 c만 받아서 화이트 스페이스인
    printf("[%c%c]\n", ch1, ch2);   // 스페이스바, 텝, 엔터 무시
    printf("%d, %d\n", ch1, ch2);

    return 0;
}