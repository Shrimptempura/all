// sin()을 사용하여 0도부터 180도까지 10도 단위로 사인 함수 값 출력
// 추가적으로 각도를 받아서 사인값을 반환하는 함수 sin_degree(double degree) 작성하기
#include <stdio.h>
#include <math.h>
#define PIE 3.141592

double sin_degree(double degree);

int main(void)
{
    double degree;

    for (degree = 0; degree <= 180; degree = degree + 10)
        printf("sin(%d)의 값은 %lf\n", (int)degree, sin_degree(degree));

    return 0;
}

double sin_degree(double degree)
{
    double r;

    r = sin(PIE * degree / 180);

    return r;
}