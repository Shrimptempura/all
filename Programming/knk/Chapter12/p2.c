#include <stdio.h>
#include <ctype.h>
#define N 100

int main(void)
{
    char ch, message[N];
    char *p = message;
    int len = 0;
    int check = 0, i = 0;

    printf("Enter a message : ");
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            *p++ = toupper(ch);
            len++;
        }
    }

    for (p = message; p < message + (len / 2); p++)
    {
        if (*p != *(message + ((message + len) - p) - 1))
        {
            check = 1;
            break;
        }
    }

    if (check == 1)
        printf("Not a palindrome\n");
    else
        printf("Palindrome\n");

    return 0;
}