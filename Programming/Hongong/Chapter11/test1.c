#include <stdio.h>

int main(void)
{
    char ch;
    int len, max = 0;

    while (1)
    {
        ch = getchar();
        if (ch == -1) break;
        len = 0;
        while (ch != '\n')
        {
            len++;
            ch = getchar();
        }
        printf("길이 : %d", len);
        if (len > max) max = len;
        printf("\n");
    }
    printf("가장 긴 단어의 길이 %d\n", max);

    return 0;
}