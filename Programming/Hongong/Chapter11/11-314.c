#include <stdio.h>

int main(void)
{
    char ch;
    int cnt = 0;
    ch = getchar();

    while (ch != '\n')
    {
        if ((96 < ch) && (ch < 123)) cnt++; // (ch >= 'a') && (ch <= 'z')
        ch = getchar();
    }

    printf("소문자의 개수 : %d\n", cnt);

    return 0;
}