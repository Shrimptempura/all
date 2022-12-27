// 재귀함수 호출; 무한루프
#include <stdio.h>

void fruit(void);

int main(void)
{
    fruit();

    return 0;
}

void fruit(void)
{
    printf("apple\n");
    fruit();
}