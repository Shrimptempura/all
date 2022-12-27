// 내가 만든 포인터 배열로, 인덱스 하나당 입력하기
#include <stdio.h>

int main(void)
{
    char *pm[10] = {"aaa", "bbb", "af", "eerr", "eeee"};
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", pm[i]);
    }

    return 0;
}