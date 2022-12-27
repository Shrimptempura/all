// 영문 문자열 안에 포함된 영단어의 개수를 계산하여 화면에 출력하는 프로그램 작성
#include <stdio.h>
#include <string.h>

int get_word_count(char *str);

int main(void)
{
    char s[100];

    printf("문자열을 입력하시오 : ");
    gets(s);

    printf("단어의 수는 %d입니다.\n", get_word_count(s));

    return 0;
}

int get_word_count(char *s)
{
    char *token;
    int count = 0;

    strtok(s, " ");

    while (token != NULL)
    {
        token = strtok(NULL, " ");
        count++;
    }

    return count;
}