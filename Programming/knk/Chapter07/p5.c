#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int num = 0;

    printf("Enter a word : ");

    while ((ch = getchar()) != '\n')
    {
        switch (toupper(ch))
        {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O':
            case 'R': case 'S': case 'T': case 'U':
                num += 1;
                break;
            case 'D': case 'G':
                num += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                num += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                num += 4;
                break;
            case 'K':
                num += 5;
                break;
            case 'J': case 'X':
                num += 8;
                break;
            case 'Q': case 'Z':
                num += 10;
                break;
            default:
                printf("Wrong Word\n");
                return 0;
        }
    }
    printf("Scrabble value : %d\n", num);

    return 0;
}