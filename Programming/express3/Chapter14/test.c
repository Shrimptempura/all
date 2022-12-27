#include <stdio.h>

int main(void)
{
    int ary[5] = {1, 2, 3, 4, 5};

    printf("%d\n", sizeof(ary) / sizeof(ary[0]));

    return 0;
}