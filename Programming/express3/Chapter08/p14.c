// 두 점사이의 거리를 계산하는 함수를 작성해보자, 2차원 공간에서 두점사이 계산 함수
// get_distance(double x1, double y1, double x2, double y2), 제곱근은 sqrt()사용
#include <stdio.h>
#include <math.h>

double get_distance(double x1, double y1, double x2, double y2);

int main(void)
{
    double x1, x2, y1, y2;

    printf("첫번째 점의 좌표를 입력하시오 : ");
    scanf("%lf %lf", &x1, &y1);

    printf("첫번째 점의 좌표를 입력하시오 : ");
    scanf("%lf %lf", &x2, &y2);

    printf("두점 사이의 거리는 %lf입니다.\n", get_distance(x1, y1, x2, y2));

    return 0;
}

double get_distance(double x1, double y1, double x2, double y2)
{   
    return  sqrt(pow(x1 - x2, 2.0) + pow(y1 - y2, 2.0));
}