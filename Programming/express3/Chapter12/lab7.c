// 단어세기, 여기서는 isalpha()로 첫글자가 알파벳인지 검사, 만약 첫 글자가 알파벳이면
// 단어의 시작이므로 단어 카운터 증가, 만약 단어의 중간이라면 아무것도 하지 않는다.
// 알파벳이 아닌 글자가 나오면 다음 단어를 기다린다고 표시를 한다.
// 문론 sttrok() 사용시 편리하게 구할 수 있다.
#include <stdio.h>
#include <ctype.h>

int count_word(char *s);

int main(void)
{
    int wc = count_word("the c book...");
    printf("단어의 개수 : %d\n", wc);

    return 0;
}

int count_word(char *s)
{
    int i, wc = 0, waiting = 1;     // 단어를 기다리고 있는 상태이면 '1'이다.

    for (i = 0; s[i] != NULL; ++i)
    {
        if (isalpha(s[i]))
        {
            if(waiting)
            {
                wc++;
                waiting = 0;
            }
        }
        else
            waiting = 1;
    }

    return wc;
}
