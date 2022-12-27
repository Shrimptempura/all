// strtok(), token
#include <stdio.h>
#include <string.h>

char s[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n";     // 스페이스, 쉼표, 탭, 줄 바꿈 문자
char *token;

int main(void)
{
    token = strtok(s, seps);

    while (token != NULL)
    {
        printf("토큰: %s\n", token);
        token = strtok(NULL, seps);
    }

    return 0;
}