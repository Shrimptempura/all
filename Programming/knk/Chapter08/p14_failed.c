#include <stdio.h>
#include <string.h>
// 문제가 좆같음. 이거 ? . !은 인덱스 그대로 들가고 뒤에서부터 단어 역순환 아닌가?
// 확인차 다른 사람 코드 봤는데 끼어맞추기 형식 
int main(void)
{       // strlen : 순수 문자열의 길이만, 
    char sentence[64];
    int i, j, start, lenth;

    fgets(sentence, 64, stdin);
    lenth = strlen(sentence);
    int end = lenth + 1;

    for (i = lenth; i >= 0; i--)
    {
        if (sentence[i] == ' ')
        {
            start = i;    // 위치지정
            for (j = start + 1; j < end; j++)
            {
                printf("%c", sentence[j]);
            }
            end = start + 1;
        }
        if (i == 0)
        {
            start = i;
            for (j = start; j < end; j++)
            {
                printf("%c", sentence[j]);
            }
        }
    }
    printf("\n");

    return 0;
}
