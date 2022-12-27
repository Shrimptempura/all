// 암호화된 문자열
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char word[100];
    int shift = 3;
    int i = 0;

    printf("문자열을 입력하시오 : ");
    gets(word);

    while (word[i] != '\0')
    {
        if (isalpha(word[i]))
        {
            word[i] += shift;
            if (word[i] > 'z')
                word[i] -= 26;
            else if (word[i] < 'a')
                word[i] += 26;
        }
    i++;
    }

    printf("암호화된 문자열: %s\n", word);

    return 0;
}