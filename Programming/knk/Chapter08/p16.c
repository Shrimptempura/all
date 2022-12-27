#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int word[32] = {0, };
    char ch;
    int i, cnt = 0;

    printf("Enter first word : ");
    while ((ch = getchar()) != '\n')
    {
        ch = tolower(ch);
        word[ch - 97] += 1;
    }
    
    printf("Enter second word : ");
    while ((ch = getchar()) != '\n')
    {
        ch = tolower(ch);
        word[ch - 97] -= 1;
    }

    for (i = 0; i < 32; i++) {
        cnt += word[i];
    }

    if (cnt == 0)
        printf("The words are anagrams\n");
    else
        printf("The words are not anagrams\n");
    
    // printf("The words are ");
    // count == 0 ? printf("anagrams.\n") : printf("not anagrams.\n");

    return 0;
}