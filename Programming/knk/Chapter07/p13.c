#include <stdio.h>

int main(void)
{
    char ch;
    int word = 0;
    int spc = 1;    // 공백이라.. 단어의 숫자는 공백 + 1;

    printf("Enter a sentence : ");
    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ')   // 공백일시 공백 숫자++;
            spc++;
        else
            word++;      // 공백이 아닐시 글자++;
    }
    printf("Average word length : %.1lf\n", (double)word / spc);

    return 0;
}