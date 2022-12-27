#include <stdio.h>

void f(void);

int i;

int main(void)
{
    for (i = 0; i < 3; i++)
        f();
    return 0;
}

void f(void)
{
    for (i = 0; i < 5; i++)
        printf("#");
}