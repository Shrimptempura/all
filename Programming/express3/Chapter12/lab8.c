// 예시 : sscanf(s, ...)  : '문자열 s'로부터 지정된 형식으로 수치를 읽어 '변수'에 저장
// sprintf(s, ...) : '변수'의 값을 형식 지정자에 따라 문자열 형태로 '문자 배열' s에 저장
#include <stdio.h>

int main(void)
{
    char s[] = "100";
    int value;

    sscanf(s, "%d", &value);
    printf("%d\n", value);
    value++;

    sprintf(s, "%d", value);
    printf("%s\n", s);

    return 0;
}