// strtok없이 문자열 문장들 반전
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char line[100];
    int end;

    printf("문자열을 입력하시오 : ");
    gets(line);
    end = strlen(line) - 1;     // 문자열의 맨 마지막 인덱스 번호

    while (end > 0)     // 맨뒤에서 시작
    {
        while (!isspace(line[end]))     // 공백이 아니면
            end--;      // 다음 글자로 이동
            
        if (end > 0)    // 공백발견시, 첫 단어가 아니면
        {
            printf("%s ", &line[end + 1]);      // 공백 다음 글자부터 출력
            line[end] = '\0';       // 발견된 space를 null로 바꿈
            end--;      // 공백 앞으로 이동
        }
    }
    printf("%s", line);     // 맨 앞 단어 처리
    printf("\n");

    return 0;
}