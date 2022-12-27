// strtok 운영미숙으로 접고, 다음 챕터때 다시 봄
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[128] = "And that's the way it is";
    char *ptr;
    int vowel = 0;

    ptr = strtok(str, "aeiou");
    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strtok(NULL, "aeiou");
        vowel++;
    }

    printf("Your sentence contains %d vowels\n", vowel);

    return 0;
}