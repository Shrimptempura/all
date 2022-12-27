// 원의 면적을 구하는 문제를 함수로 작성, 원의 면적을 구하는 함수(cal_area(double radius))
// 함수를 호출하여 원의 면적을 출력, 면적 = 원주율 * 반지름 * 반지름
#include <stdio.h>
#define PIE 3.141592

double cal_area(double radius);   // 원의 면적구하는 함수

int main(void)
{
    double radius, area;

    printf("원의 반지름을 입력하시오 : ");
    scanf("%lf", &radius);

    area = cal_area(radius);
    printf("원의 면적은 %lf입니다.\n", area);

    return 0;
}

double cal_area(double radius)
{
    return PIE * radius * radius;
}