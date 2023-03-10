// 한 문자를 파일로 출력할 때는 fputc 함수를 사용합니다. fputc 함수에 출력할 문자와
// 파일 포인터를 인수로 주면 파일로 문자를 출력합니다.
// 문자열을 한 문자씩 파일로 출력하기
#include <stdio.h>

int main(void)
{
    FILE *fp;       // 파일 포인터 선언
    char str[] = "banana";      // 출력할 문자열
    int i;

    fp = fopen("b.txt", "w");   // 쓰기 전용으로 개방
    if (fp == NULL)             // 파일 개방 확인
    {
        printf("파일을 만들지 못했습니다.\n");
        return 1;
    }

    i = 0;                      // 문자 배열의 첫 번째 문자부터 출력
    while (str[i] != '\0')      // 널 문자가 아니면
    {
        fputc(str[i], fp);      // 문자를 파일에 출력
        i++;                    // 다음 문자로 이동
    }
    fputc('\n', fp);            // 개행 출력
    fclose(fp);                 // 파일 닫음

    return 0;
}
/*
12행에서 출력용으로 사용할 파일을 개방, 20 ~ 24행에서 str 배열의 문자를 하나씩 개방한
파일에 반복적으로 출력, fputc 함수는 스트림 파일의 버퍼에 한 문자씩 버퍼에 출력
스트림 파일의 버퍼에서 개행 문자를 출력하면 한꺼번에 장치(하드디스크 파일 b.txt)로 출력
*/