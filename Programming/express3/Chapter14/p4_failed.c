// 문자열의 배열을 인수로 받아서 저장된 문자열을 전부 출력하는 pr_str_arry() 함수를
// 작성하여 테스트하여 보자.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void pr_str_array(char **dp);

int main(void)
{
    char *str = malloc(sizeof(char) * 10);
    char ary[10];
    int i, ww;

    while (i < 5)
    {
        *str[i] = malloc(sizeof(char) * 10);
        i++;
    }
    for (i = 0; i < 5; i++)
    {
        printf("복사할 문장을 적으세요 : ");
        gets(ary);
        *str[i] = ary;
    }
    pr_str_array(&str);

    for (i = 0; i < 5; i++)
    {
        free(*str[i]);
    }

    return 0;
}

void pr_str_array(char **dp)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", dp[i]);
    }
}