// strncpy 함수를 사용한 문자열 복사, strncpy는 문자열을 복사할 때 문자의 수를 지정 가능
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20] = "mango tree";    

    strncpy(str, "apple-pie", 5);   // apple-pie에서 다섯 문자만 복사
    printf("%s\n", str);            // 복사 받은 문자열 출력

    return 0;
}
/* 만약 str 배열이 문자열 "apple"로만 쓰게 할려면 apple 복사후 널 문자 별도 저장
    => str[5] = '\0';
*/