#include<stdio.h>

void print(int type, void *vp)
{
    if (type == 1)
        printf("정수: %d\n", *(int *)vp);
    else if (type == 2)
        printf("실수: %lf\n", *(double *)vp);
}

int main(void)
{
    int a = 3;
    double d = 5.6;

    print(1, &a);
    print(2, &d);

    return 0;
}