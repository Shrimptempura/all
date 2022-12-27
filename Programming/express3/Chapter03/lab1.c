// 변수 x와 y에 20과 10을 저장하고 x + y, x - y, x * y, x / y을 계산하여서 변수에 저장
// 하고 이들 변수를 화면에 출력하는 프로그램 작성해보자
#include <stdio.h>

int main(void)
{
    int x = 20, y = 10;
    int sum;
    int sub;
    int mul;
    int div;

    sum = x + y;
    sub = x - y;
    mul = x * y;
    div = x / y;

    printf("두수의 합: %d\n", sum);
    printf("두수의 차: %d\n", sub);
    printf("두수의 곱: %d\n", mul);
    printf("두수의 몫: %d\n", div);

    return 0;
}