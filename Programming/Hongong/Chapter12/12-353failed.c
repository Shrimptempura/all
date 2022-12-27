// 키보드로 입력한 단어의 길이가 5자를 넘는 경우 6자부터 '*'출력, 단어 최대 길이 15자
#include <stdio.h>
#include <string.h>

char *my_strcat(char *pd, char *ps);

int main(void)
{
    char str[15] = {0};
    char str1[10] = {"*"};
    char *ps = str1; 

    printf("입력 값 : ");
    scanf("%s", str);

    my_strcat(str, ps);

    return 0;
}

char *my_strcat(char *pd, char *ps)
{
    char *po = pd;

    while (*pd != *pd + 5)  // pd를 5번째 문자위 위치로 이동시킴
    {
        pd++;
    }
    while (*ps != (*ps + (strlen(pd) - 5)))
    {
        *pd = *ps;
        pd++;
        ps++;
        if (strlen(pd) < 0)
        {
            return ps;
        }
    }
    *pd = '\0';

    return po;
}