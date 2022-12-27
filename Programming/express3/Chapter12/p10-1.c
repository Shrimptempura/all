#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tolower(char *str);
void check_palindrome(char *str);

int main(void) 
{
    char str[100];
    
    printf("문자열을 입력하시오: ");
    gets(str);
    
    tolower(str);
    check_palindrome(str);

    return 0;
}

void tolower(char* str) 
{
    int i;
    
    for(i = 0; str[i] != NULL; i++) 
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 'a' - 'A';
    }
}

void check_palindrome(char* str) 
{
    int i, length, equal = 0;
    
    length = strlen(str);

    for(i = 0; ; i++) 
    {
        if(i < length - i)
            if(str[i] != str[length -i -1])
                equal++;
        else
            break;
    }

    if(equal == 0) 
        printf("회문입니다.\n");
    else
        printf("회문이 아닙니다.\n");
}
// int check_palindrome(char *str)
// {
// 	int i, count=0;

// 	for(i=0; i<strlen(str)/2; i++)
//     {
// 		if(str[i]==str[strlen(str)-1-i])
// 			count+=0;
// 		else
// 			count+=1;
// 	}
// 	return count;
// }