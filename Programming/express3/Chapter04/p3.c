// int형의 변수 x와 y의 값을 서로 교환하는 프로그램 작성하자, 변수 필요시 정의하여 사용
// 하고 변수 x와 y는 10, 20으로 초기화
#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 20;
    int temp;

    printf("x = %d, y = %d\n", x, y);

    temp = x;
    x = y;
    y = temp;

    printf("x = %d, y = %d\n", x, y);

    return 0;
}