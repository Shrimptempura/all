// 문자열을 저장하는 char형 배열
// char형 배열 선언할 때 최소 하나 이상 크게 배열을 선언(\0,NULL)
#include <stdio.h>

int main(void)
{
    char str[80] = "applejam";      // 문자열 초기화

    printf("최초 문자열 : %s\n", str);  // 초기화 문자열 출력
    printf("문자열 입력 : ");
    scanf("%s", str);       // 새로운 문자열 입력
    printf("입력 후 문자열 : %s\n", str);   // 입력된 문자열 출력

    return 0;
}
/* char str[80];
str[0] = 'a';
str[1] = 'p';
... str[5] = '\0';   마지막 문자 다음에 반드시 널 문자 대입
*/