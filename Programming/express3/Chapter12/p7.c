// 사용자에게 질문 제시하고 답변을 받아서 긍정일시 1 반환, 부정이면 0 반환하는 함수
// get_response(char *prompt)를 작성 및 테스트, 여기의 매개변수 prompt는 사용자에게
// 제시하는 질문이다. 긍정을 의미하는 문자열 = "yes", "ok", 부정 = "no" 가정
// 대소문자는 구별하지 않도록 한다.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int get_response(char *prompt);

int main(void)
{
    char prompt[30];

    if (get_response(prompt) == 1)
        printf("긍정적인 답변\n");
    else
        printf("부정적인 답변\n");

    return 0;
}

int get_response(char *prompt)
{   
    int i;
    char answer[10];

    do
    {
        printf("질문하세요 : ");
        gets(prompt);       // 질문 입력함

        printf("답변하세요 : ");
        gets(answer);       // 답변 입력함

        for (i = 0; answer[i] != NULL; i++)
            tolower(answer[i]);    // 답변 모두 소문자로 전환

        if (strcmp(answer, "yes") == 0 || strcmp(answer, "ok") == 0)
            return 1;
        else if (strcmp(answer, "no") == 0)
            return 0;
    } while (!1 || !0);

}