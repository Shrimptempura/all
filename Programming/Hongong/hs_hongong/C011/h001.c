#include <stdio.h>
int a = 1; // 전역 변수
void main()
{
    int b = 2; // 지역 변수
    extern int d; // 외부 변수 연결
    printf("main(): a = %d, b = %d\n", a, b);
    {
        int c = 3; // 지역 변수
        printf("main(): a = %d, b = %d, c = %d\n", a, b, c);
    }
    printf("main(): a = %d, b = %d, d = %d\n", a, b, d);
    printf("a = %d, b = %d, c = \n", a, b, c);
    printf("a = %d\n", s);
    sub();
}
