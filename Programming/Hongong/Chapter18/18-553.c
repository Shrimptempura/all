#include <stdio.h>

int main(void)
{
    FILE *fp;                   // 파일 포인터
    char str[20] = "empty";     // 문자열 입력 배열
    int ch;

    fp = fopen("a.txt", "r");       // 파일 개방
    ch = fgetc(fp);                 // 문자 입력
    while (fgetc(fp) != EOF);       // 버퍼 비움, EOF가 아닐때까지 -> EOF : 입력한 문자,
                                    // 오류나 파일에 데이터가 없을때.. 무한반복 즉,
                                    // 한글자씩 계속 받아서 배열의 끝까지 간 경우(파일의 끝)
    fgets(str, sizeof(str), fp);    // 한 줄 입력
    printf("%s", str);              // 출력
    fclose(fp);                     // 파일 닫음

    return 0;
}
/*
처음 fgetc 함수가 호출될 때 파일의 데이터가 작으므로 모든 데이터가 버퍼로 입력됩니다.
이어서 fgetc 함수를 반복 호출하여 버퍼의 모든 내용을 지우므로 이후 호출되는 fgets 함수는
입력할 데이터가 없습니다. 결국 fgets 함수는 널 포인터를 반환하며 str 배열의 초기값
empty가 그대로 출력됩니다.*/