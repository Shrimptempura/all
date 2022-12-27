// getchar 함수를 사용한 문자열 입력
#include <stdio.h>

void my_gets(char *str, int size);

int main(void)
{
    char str[7];        // 문자열을 저장할 배열

    my_gets(str, sizeof(str));      // 한 줄의 문자열을 입력하는 함수
    printf("입력한 문자열 : %s\n", str);    // 입력한 문자열 출력

    return 0;
}

void my_gets(char *str, int size)       // char은 char 배열, size는 배열의 크기
{
    int ch;         // getchar 함수의 반환값을 저장할 변수
    int i = 0;      // str 배열의 첨자

    ch = getchar();     // 첫 번째 문자 입력, 여기서 입력을 안하면 밑에 while문의
                        // ch 값이 없음
    while((ch != '\n') && (i < size -1))        // 배열의 크기만큼 입력
    {
        str[i] = ch;        // 입력한 문자를 배열에 저장
        i++;                // 첨자 증가
        ch = getchar();     // 새로운 문자 입력, 27행을 지우면 ex)a boy입력시 처음에
                            // str[0] = aboy의 a가 들어가고 i++로 str[1]에 a 넣고 반복
    }
    str[i] = '\0';          // 입력된 문자열의 끝에 널 문자를 저장
}
