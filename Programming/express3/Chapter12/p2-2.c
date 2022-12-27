#include <stdio.h>
void space_delete(char *str);

int main(void) 
{
    char str[100];

    printf("공백 문자가 있는 문자열을 입력하시오: ");
    gets(str);
    space_delete(str);

    return 0;
}

void space_delete(char *str) 
{
    int i;
    for(i = 0; str[i] != NULL; i++) 
    {
        if(str[i] == ' ')
            continue;
        printf("%c", str[i]);
    }
    printf("\n");
}