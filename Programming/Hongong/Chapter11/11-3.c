/* scanf와 printf는 문자랑 숫자도 입력하는 기능이라 문자만 입력하는 함수에 비해 크기가 크다
따라서 문자만 입출력하는 경우는 문자 전용 함수를 쓰는 것이 효율적이다.
=> getchar, putchar함수는 문자 전용 입출력함수이다.
int getchar(void);  => 매개변수가 없고 입력한 문자를 반환합니다.
int putchar(void);  => 출력할 문자를 인수로 줍니다.
*/

// getchar 함수와 putchar 함수 사용
#include <stdio.h>

int main(void)
{
    int ch;     // 입력 문자를 저장할 변수

    ch = getchar();     // 함수가 반환하는 문자를 바로 저장
    printf("입력한 문자 : ");
    putchar(ch);        // 입력한 문자 출력 
    putchar('\n');      // 개행 문자 출력

    return 0;
}