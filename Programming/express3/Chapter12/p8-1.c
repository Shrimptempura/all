#include <stdio.h>
#include <string.h>

int get_word_count(char *str);

int main(void)
{
    char str[100];
    
    printf("문자열을 afdf입력하시오: ");
    gets(str);
    
    printf("단어의 수는 %d입니다. \n", get_word_count(str));
    
    return 0;
}

int get_word_count(char *str) 
{
    char *token;
    int count = 1;

    token = strtok(str, " ");
    if(token) 
    {
        while(token = strtok(NULL, " "))
            count++;
    }
    return count;
}