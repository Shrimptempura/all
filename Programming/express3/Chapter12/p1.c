// 사용자로부터 문자를 입력받아서 그 문자의 아스키 코드 값 출력하는 프로그램 작성
#include <stdio.h>

int main(void)
{
    char ch;
    printf("문자를 입력하시오 : ");
    scanf("%c", &ch);

    printf("아스키 코드 값 = %d\n", ch);

    return 0;
}