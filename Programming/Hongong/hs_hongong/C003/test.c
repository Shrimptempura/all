// 버퍼를 사용하는 문자 입력
#include <stdio.h>

int main(void)
{
    char ch;
    int i;

    for (i = 0; i < 3; i++)
    {
        scanf("%c", &ch);   // 문자 입력
        printf("%c", ch);   // 입력된 문자 출력
    }
    
    /*while (1)
    {
        scanf("%c", &ch);
        if (ch == '\n') break;
        printf("입력한 문자 : %c\n", ch);
    */
    return
}
