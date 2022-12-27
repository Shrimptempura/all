#include <stdio.h>
#include <string.h>

double compute_average_word_length(const char *sentence);

int main(void)
{
    char sentence[32];
    double avg;

    printf("Enter a sentence : ");
    fgets(sentence, 32, stdin);
    sentence[strlen(sentence) - 1] = '\0';

    avg = compute_average_word_length(sentence);

    printf("Average word length : %.1lf\n", avg);

    return 0;
}

double compute_average_word_length(const char *sentence)
{   // fgets를 사용함으로써 (개행포함함) 개행까지 읽는 오류발생, 빼줬음
    int i;
    int word = 0;
    int spc = 1;

    while (*sentence)
    {
        if (*sentence == ' ')
            spc++;
        else        // else if (*sentence != ' ')
            word++;
        sentence++;
    }

    return (double)word / spc;
}