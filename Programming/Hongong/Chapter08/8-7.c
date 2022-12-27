// 널 문자가 없는 문자열
#include <stdio.h>

int main(void)
{
    char str[5];

    str[0] = 'O';
    str[1] = 'K';
    printf("%s\n", str);

    return 0;
}
// 실행결과 오류, 6행에서 초기화 x -> 쓰레기 값 존재