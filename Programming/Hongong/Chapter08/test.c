#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 0;
    int r1, r2, r3, r4;

    r1 = a % c;
    r2 = b % c;
    r3 = c % c;
    r4 = d % c;



    printf("1 나누기 3은 = %d\n", r1);
    printf("2 나누기 3은 = %d\n", r2);
    printf("3 나누기 3은 = %d\n", r3);
    printf("0 나누기 3은 = %d\n", r4);

    return 0;
}