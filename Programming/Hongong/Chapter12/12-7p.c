// gets 함수와 똑같이 작동하는 함수를 만들어보자
#include <stdio.h>

int main(void)
{
    int i = 0;      // 배열 요소 첨자 변수
    char str[80];   // 문자열을 저장할 변수
    char ch;        // 입력한 문자를 받아둘 임시 변수

    do                      // do ~while문이니 실행 후 조건을 검사
    {
        ch =  getchar();    // 일단 문자 하나 입력
        str[i] = ch;        // 배열에 저장
        i++;                // 첨자 증가
    } while (ch != '\n');   // 입력한 문자가 개행이면 종료

    str[i] = '\0';          // 개행 문자가 입력된 위치에 널 문자 저장
    // printf("%s", str);  확인용 
    return 0;
}
// 함수를 만들어서 프로그램 작성할 때 호출하는 방법
void my_gets(char *ps)  // ps는 첫 번째 배열 요소를 가리킨다.
{
    char ch;

    while((ch = getchar()) != '\n')     // 1)입력한 문자가 개행 문자가 아닌 동안 반복
    {
        *ps = ch;       // 배열에 저장하고
        ps++;           // 다음 배열로 이동
    }
    *ps = '\0';         // 2)마지막에 널 문자로 마무리한다.
}