#include <stdio.h>

void f(void);

int x = 1;

int main(void)
{
    int x = 2;
    {
        int x = 3;
        printf("%d\n", x);
    }
    printf("%d\n", x);

    return 0;
}