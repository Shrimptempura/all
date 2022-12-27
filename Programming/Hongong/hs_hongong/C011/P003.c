#include <stdio.h>
#include <ctype.h>

int count_alpha(char *s);

int main(void)
{
    char sentence[80];
    int cnt;

    // Man is immotal, because he has a soul
    printf("문장을 입력하시오 : ");
    gets(sentence);
    
    cnt = count_alpha(sentence);
    printf("영문자 수: %d\n", cnt);

    return 0;
}

int count_alpha(char *s)
{
    int cnt = 0;
    
    while (*s)
    {
        if (isalpha(*s))
            cnt++;
        s++;
    }

    return cnt;
}