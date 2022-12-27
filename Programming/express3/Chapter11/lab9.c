#include <stdio.h>

int main(void)
{
    int list[10] = {5, 3, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p;
    p = list;

    printf("%d\n", *list);
    printf("%d\n", *p + 1);
    printf("%d\n", *(p + 1));

    return 0;
}