#include <stdio.h>

int main(void)
{
    double angular, r, distance, circ;

    printf("거리를 입력하시오 : ");
    scanf("%lf", &distance);

    printf("각도를 입력하시오 : ");
    scanf("%lf", &angular);

    circ = (360.0 * 900.0) / 7.2;
    r = circ / (2.0 * 3.14);

    printf("지구의 반지름은 : %lf\n", r);

    return 0;
}