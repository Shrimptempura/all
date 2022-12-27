#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int word[26]);
bool equal_array(int word[26]);

int main(void)
{
    int word[26] = {0, };
    char ch;
    int i, cnt = 0;

    read_word(word);

    if (equal_array(word) == true)
        printf("The words are anagrams\n");
    else
        printf("The words are not anagrams\n");
    
    // printf("The words are ");
    // count == 0 ? printf("anagrams.\n") : printf("not anagrams.\n");

    return 0;
}

void read_word(int word[26])
{
    char ch;
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
}

bool equal_array(int word[26])
{
    int cnt = 0;
    int i;

    for (i = 0; i < 26; i++) {
        cnt += word[i];
    }

    if (cnt == 0)
        return true;   // 같다 
    else
        return false;   // 다르다
}