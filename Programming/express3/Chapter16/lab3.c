// 전처리기 사용 예제
#include <stdio.h>
#define DEBUG
#define USA

#ifndef PIE
#define PIE 3.141592
#endif

#ifndef SQUARE
#define SQUARE(x) ((x) * (x))
#endif

double area(double radius)
{
    double result = 0.0;
#ifdef DEBUG
#ifdef USA
    printf("area(%f) is called \n", radius);
#else
    printf("area(%f)가 호출 되었음\n", radius);
#endif
#endif
    result = PIE * SQUARE(radius);

    return result;
}

int main(void)
{
    double radius;

#ifdef USA
    printf("Please enter radius of a circle(inch) : ");
#else
    printf("원의 반지를을 입력하시오 : ");
#endif

    scanf("%lf", &radius);
#ifdef USA
    printf("area of the circle is %f\n", area(radius));
#else
    printf("원의 면적은 %f입니다.\n", area(radius));
#endif

    return 0;
}