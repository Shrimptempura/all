// 간단한 철자 교정 프로그램, 문자열을 입력 받아서 문자열 안에 마침표가 있으면,
// 문자열의 첫번째 문자가 대문자인지 검사한다. 만약 대문자가 아니면 대문자로 변환한다.
// 또한 문장의 끝에 마침표가 존재하는지 검사한다. 역시 마침표가 없으면 넣어준다.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trans_word(char *string);

int main(void)
{
    char s[100];

    printf("텍스트를 입력하시오 : ");
    gets(s);

    trans_word(s);
    printf("수정된 텍스트 : %s\n", s);

    return 0;
}

void trans_word(char *string)
{
    if (islower(string[0]))     // 만약 s의 첫글자가 소문자이면
        string[0] = toupper(string[0]);

    if (string[strlen(string) - 1] != '.')
    {
        string[strlen(string)] = '.';
        string[strlen(string) + 1] = '\0';
    }
}