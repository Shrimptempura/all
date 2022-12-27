#include <stdio.h>
int d = 4; // 전역 변수
static int s = 5; // 정적 변수
void sub()
{
    static int s2; // 정적 지역 변수
    printf("sub(): d = %d, s = %d, s2 = %d\n", d, s, s2);
}
