#include <stdio.h>

void func(void);

int a = 10;         // 전역 변수

int main(void)
{
    a = 20;
    func();
    printf("%d\n", a);

    return 0;
}

void func(void)
{
    a = 30;
}