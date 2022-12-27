// 사용자로부터 받은 문자열에서 각각의 문자가 나타나는 빈도를 계산하여 출력하는 프로그램
#include <stdio.h>
#include <string.h>

int str_chr(char *s, int c);    // int c의 이유, strchr()의 원형은 문자비교를
                                // 아스키코드로 비교함
int main(void)
{
    char s[100];
    int c = 97;  // a ~ i, 97 ~ 105
    int result;

    printf("문자열을 입력하fsfsf시faf오 : ");
    gets(s);

    while (c != 106)
    {
        result = str_chr(s, c);
        printf("%c : %d\n", c, result);
        c++;
    }

    return 0;
}

int str_chr(char *s, int c)
{
    char *p;
    int i;
    int count = 0;

    p = strchr(s, c);

    while (p != NULL)
    {
        if (p != NULL)
            count++;
        p = strchr(p + 1, c);
    }

    return count;
}