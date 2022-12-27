// 문자열을 출력하는 puts와 fputs 함수
#include <stdio.h>

int main(void)
{
    char str[80] = "apple juice";   // 배열에 문자열 초기화
    char *ps = "banana";            // 포인터에 문자열 연결

    puts(str);          // apple juice 출력하고 줄 바꿈(puts)
    fputs(ps, stdout);  // banana만 출력    
    puts("milk");       // banana에 이어 milk 출력

    return 0;
}
/* puts와 fputs 함수는 문자열의 시작 위치부터 널 문자가 나올 때까지 모든 문자 출력
9행과 같이 char 배열의 배열명이나 10행과 같이 문자열 상수를 연결하고 있는 포인터를
인수로 줄 수 있다. 11행처럼 문자열 상수를 직접 사용도 가능하다.
=> 어떤 경우든 문자열에서 첫 번째 문자가 주소가 되므로 결국 문자열이 출력된다.

puts 함수는 문자열 출력후 자동으로 줄을 바꿔줌
fputs 함수는 자동으로 바꾸지 않음.
*/
