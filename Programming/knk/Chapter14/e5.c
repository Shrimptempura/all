#include <stdio.h>
#include <string.h>
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main(void)
{
    char s[100] = {0, };
    int i;

    // (a)
    strcpy(s, "abcd");
    i = 0;
    putchar(TOUPPER(s[++i]));

    // (b)
    strcpy(s, "0123");
    i = 0;
    putchar(TOUPPER(s[++i]));

    // soution, 정확도 낮음 주의;
    putchar(TOUPPER(s[++i]));
    putchar(('a'<=(s[++i])&&(s[++i])<='z'?(s[++i])-'a'+'A':(s[++i])));
    putchar(('a'<=(s[1])&&(s[2])<='z'?(s[++i])-'a'+'A':(s[3])));
    putchar('D');

    putchar(TOUPPER(s[++i]));
    putchar(('a'<=(s[++i])&&(s[++i])<='z'?(s[++i])-'a'+'A':(s[++i])));
    putchar(('a'<=(s[1])&&(s[++i])<='z'?(s[++i])-'a'+'A':(s[2])));
    putchar('3');

    return 0;
}