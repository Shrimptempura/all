#include <stdio.h>
#include <string.h>

int main(void)
{
    int i = 0;
    int count = 0;
    char str1[80] = {0, };

    printf("문자 입력 : ");
    gets(str1);

    while (str1[i])
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str1[i] += 32;
            count++;
        }
        i++;
    }
    
    printf("바뀐 문장 : %s\n", str1);
    printf("바뀐 문자 수 : %d\n", count);
    return 0;
}
/* 키보드로부터 문장을 입력받은 후에 대문자를 찾아 소문자로 바꾸는 프로그래밍 */