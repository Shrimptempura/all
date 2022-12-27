// 문제점: switch문에서 num값 받고 밑에서 출력시 default를 걸치면
// 28줄의 pf에 쓰레기값 들어감
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter phone number : ");
    
    while ((ch = getchar()) != '\n')
    {
        switch (ch)
        {
            case 'A': case 'B': case 'C': ch = '2'; break;
            case 'D': case 'E': case 'F': ch = '3'; break;
            case 'G': case 'H': case 'I': ch = '4'; break;
            case 'J': case 'K': case 'L': ch = '5'; break;
            case 'M': case 'N': case 'O': ch = '6'; break;
            case 'P': case 'R': case 'S': ch = '7'; break;
            case 'T': case 'U': case 'V': ch = '8'; break;
            case 'W': case 'X': case 'Y': ch = '9'; break;
            default: break;
                // printf("Wrong Enter number\n");
                // return 0;
        }
        printf("%c", ch);
    }
    printf("\n");

    return 0;
}