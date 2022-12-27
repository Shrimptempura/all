// 사용자가 아스키 코드값을 입력하면 그 아스키 코드값에 해당하는 문자를 출력해라
#include <stdio.h>

int main(void)
{
    int code;

    printf("아스키 코드 값을 입력하시오 : ");
    scanf("%d", &code);

    printf("문자 : %c입니다.\n", code);

    return 0;
}