#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[15];

    char ch;
    int i = 0;
    int rerole;

    ch = getchar();
    while (ch != '\n')
    {
        str[i] = ch;
        i++;
        ch = getchar();
    }
    str[i] = '\0';
    //strlen(str);

    while (ch != '\0')
    {
        rerole = strlen(str) - 5;
        if (strlen(str) <= 5)
            return str[i];
        if (strlen(str) > 5)
        {
            strncpy(str + 5, "**********", rerole);
            str[i + rerole] = '\0';
        }   
    }
    printf("입력한 문자열 : %s\n", str);

    return 0;
}
