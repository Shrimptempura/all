#include <stdio.h>

int main(void)
{
    char ch;
    char message[80];
    int i, shift, cnt = 0;
    printf("Enter message to be encrypted : ");
    while ((ch = getchar()) != '\n')
        message[cnt++] = ch;

    printf("Enter shift amount (1-25) : ");
    scanf("%d", &shift);

    printf("Encrypted message : ");
    for (i = 0; i < cnt; i++)
    {
        ch = message[i];
        if (ch >= 65 && ch <= 90)
            printf("%c", ((ch - 'A') + shift) % 26 + 'A');
        else if (ch >= 97 && ch <= 122)
            printf("%c", ((ch - 'a') + shift) % 26 + 'a');
        else
            printf("%c", ch);
    }
    printf("\n");

    return 0;
}