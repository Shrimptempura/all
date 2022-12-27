// 공용체 예시
#include <stdio.h>

union example {
    int i;      // 멤버 i와 c는 같은 공간 공유
    char c;
};

int main(void)
{
    union example v;    // 멤버중 가장큰

    v.c = 'A';
    printf("v.c : %c   v.i : %d\n", v.c, v.i);

    v.i = 10000;
    printf("v.c : %c   v.i : %d\n", v.c, v.i);

    return 0;
}