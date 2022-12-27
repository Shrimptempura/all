//  키보드로 입력받은 문자의 아스키 코드 값을 출력하는 프로그램
#include <stdio.h>

int main(void)
{
    char ch;

    printf("문자 입력 : ");
    scanf("%c", &ch);
    printf("%c문자의 아스키 코드 값 : %d\n", ch, ch);

    return 0;
}