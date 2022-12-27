// 3차원 문자열 배열을 이용항 간단한 한영사전 구현, 영어 -> dic[i][0], 한글 -> dic[i][1];
// 사용자가 단어를 입력하면 strcmp()를 이용하여 일치 단어를 배열 dic에서 찾는다.
// 일치하는 단어 찾으면 화면에 출력하고 종료, 일치 단어 없으면 오류 메시지 출력후 종료
#include <stdio.h>
#include <string.h>
#define WORDS 5

int main(void)
{
    int i, index;
    char dic[WORDS][2][30] = {
        {"book", "책"},
        {"boy", "소년"},
        {"computer", "컴퓨터"},
        {"lanuguage", "언어"},
        {"rain", "비"},
    };
    char word[30];

    printf("단어를 입력하시오 : ");
    scanf("%s", word);

    index = 0;
    for (i = 0; i < WORDS; i++)
    {
        if (strcmp(dic[index][0], word) == 0)
        {
            printf("%s: %s\n", word, dic[index][1]);
            return 0;
        }
        index++;
    }
    printf("사전에서 발견되지 않았습니다.\n");

    return 0;
}