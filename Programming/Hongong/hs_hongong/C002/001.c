#include <stdio.h>

int get_max(int y, int x);

int main(void) 
{
    int a, b;

    printf("두 개의 정수를 입력하시오 : ");
    scanf("%d %d", &a, &b);

    printf("main : a = %d, b = %d\n", a, b);

    printf("두 수중에서 큰 수는 %d입니다.\n", get_max(a, b));

    return 0;
}

int get_max(int y, int x)
{
    printf("get_max : a = %d, b = %d\n", x, y);

    if (x > y)
        return x;
    else
        return y;
}