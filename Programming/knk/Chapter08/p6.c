#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    char word[100];
    int i = 0;

    printf("Enter message : ");

    while ((ch = getchar()) != '\n')
    {
        switch (toupper(ch))
        {
            case 'A':
                word[i++] = '4'; break;
            case 'B':
                word[i++] = '8'; break;
            case 'E':
                word[i++] = '3'; break;
            case 'I':
                word[i++] = '1'; break;
            case 'O':
                word[i++] = '0'; break;
            case 'S':
                word[i++] = '5'; break;
            default: 
                word[i++] = ch; break;
        }
    }

    for (i = 0; word[i] != '\0'; i++)
    {
        printf("%c", word[i]);
    }
    printf(" !!!!!!!!!!\n");

    return 0;
}