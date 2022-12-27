#include <stdio.h>
void f(void);

int main(void)
{
    f();
    f();

    return 0;
}

void f(void)
{
    static int count = 0;
    printf("%d\n", count++);    // 후입연산, 출력한후에 + 1;
}