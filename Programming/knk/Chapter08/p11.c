// Chapter 7, project 4, modify;
// 존나 맘에 안듬, 처음에 gets로 받았다가 abort오류 뜸
// gets는 제한없이 쳐 받아서, fgets로 바꿔줬음
// 16줄의 i < 15인가 14인가 햇갈림(문자열의 NULL때문에)
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int i;
    char word[15];

    printf("Enter phone number : ");
    fgets(word, 15, stdin);
    
    for (i = 0; i < 15; i++)
    {
        switch (toupper(word[i]))
        {
            case 'A': case 'B': case 'C': 
                word[i] = '2'; 
                break;
            case 'D': case 'E': case 'F': 
                word[i] = '3'; 
                break;
            case 'G': case 'H': case 'I': 
                word[i] = '4'; 
                break;
            case 'J': case 'K': case 'L': 
                word[i] = '5'; 
                break;
            case 'M': case 'N': case 'O': 
                word[i] = '6'; 
                break;
            case 'P': case 'R': case 'S': 
                word[i] = '7'; 
                break;
            case 'T': case 'U': case 'V': 
                word[i] = '8'; 
                break;
            case 'W': case 'X': case 'Y': 
                word[i] = '9'; 
                break;
            default: 
                break;
        }
        printf("%c", word[i]);
    }
    printf("\n");

    return 0;
}