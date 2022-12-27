// LED 전광판 프로그램 구현
#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[100];
    int i, count = 0;
    char ch, temp;
    char *p;

    printf("광고하고 싶은 텍스트를 입력하시오 : ");
    fgets(string, sizeof(string), stdin);
    string[strlen(string) - 1] = NULL;

    while (1)
    {
        if ((ch = getchar()) == '\n')
        {
            temp = string[0];
            for (i = 0; i < strlen(string) - 1; i++)
            {
                string[i] = string[i + 1];
            }
            string[strlen(string) - 1] = temp; 
            printf("%s", string);
        }
    }

    return 0;
}