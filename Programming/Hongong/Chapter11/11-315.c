/* 키보드로 입력한 단어 중에서 길이가 가장 긴 단어의 길이를 출력하세요
한 줄에 하나의 단어만 입력하여 <Ctrl> + <Z>를 누룰때 까지 입력한 단어 중
길이가 가장 긴 단어의 길이를 출력합니다. 배열은 사용하지 마세요 */
#include <stdio.h>

int main(void)
{
    int len, max = 0;
    char ch;

    while(1)    
    {
        len = 0;
        ch = getchar();

        while ((ch != -1) && (ch == '\n'))
        {
            len++;
            ch = getchar();
        }

        if (ch == -1) break;
        if (len > max) max = len;
    }
    printf("가장 긴 단어의 길이 : %d\n", max);

    return 0;
}