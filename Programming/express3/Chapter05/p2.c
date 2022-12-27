// 2개의 double형의 실수를 읽어서 합, 차, 곱, 몫을 구하는 프로그램 작성
#include <stdio.h>

int main(void)
{
    double x, y;

    printf("실수를 입력하시오 : ");
    scanf("%lf%lf", &x, &y);

    printf("%lf %lf %lf %lf\n", x + y, x - y, x * y, x / y);

    return 0;
}