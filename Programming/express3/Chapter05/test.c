#include <stdio.h>

int main(void)
{   
    int x = 4, y, z;
    y = --x;    // --x, x = x - 1;
    z = x--;
    printf("%d %d %d\n", x, y, z);

    return 0;
}