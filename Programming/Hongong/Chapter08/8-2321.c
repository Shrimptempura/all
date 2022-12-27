// 키보드로 입력받은 문장을 대문자를 찾아 소문자로 바꾸는 프로그램
#include <stdio.h>

int main(void)
{
    char str[80];
    int i = 0;
    int count = 0;

    printf("문장 입력 : ");
    gets(str);

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;       // str[i] = str[i] + 32
            count++;
        }
        i++;
    }
    printf("바뀐 문장 : %s\n", str);

    printf("바뀐 문자 수 : %d\n", count);

    return 0;

}