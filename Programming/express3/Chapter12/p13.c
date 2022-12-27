// 사용자로부터 문자열을 받아서 문자열에 포함된 구두점의 개수를 세는 프로그램
// 구두점은 마침표와 쉼표만 있다고 가정
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int count = 0, i;

    printf("문자열을 입력하시오 : ");
    gets(str);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == '.' || str[i] == ',')
            count++;
    }

    printf("구두점의 개수는 %d입니다.\n", count);

    return 0;
}