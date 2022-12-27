// anagrams;
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
    char word1[32] = {0, };
    char word2[32] = {0, };
    char ch;
    int i = 0;

    printf("Enter first word : ");
    while ((ch = getchar()) != '\n') {
        word1[i++] = ch;
    }
    i = 0;
    
    printf("Enter second word : ");
    while ((ch = getchar()) != '\n') {
        word2[i++] = ch;
    }

    if (are_anagrams(word1, word2) == true) // if (are_anagrmas(word1, word2))
        printf("The words are anagrams\n");
    else
        printf("The words are not anagrams\n");
    
    // printf("The words are ");
    // count == 0 ? printf("anagrams.\n") : printf("not anagrams.\n");

    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    int alpha_arr[26] = {0, };

    for(; *word1; word1++)
        alpha_arr[tolower(*word1) - 97] += 1;

    for(; *word2; word2++)
        alpha_arr[tolower(*word2) - 97] -= 1;

    for (int i = 0; i < 26; i++)
        if (alpha_arr[i] != 0)
            return false;

    return true;
}