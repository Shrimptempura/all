#include <stdio.h>

int main(void)
{
    int max_length = 0, cnt = 0;
    char ch;

    while (scanf("%c", &ch) != EOF)
    {
        ++cnt;
        if (ch == '\n')
        {
            cnt = 0;
            continue;
        }
        if (max_length < cnt)
            max_length = cnt;
    }

    printf("가장 긴 단어의 길이 : %d\n", max_length);
    return 0;
}