// 사용자로부터 세 개의 실수를 입력받은 후, 합계와 평균값을 계산하여 화면에 출력하자
#include <stdio.h>

int main(void)
{
    double x, y, z;
    double sum, avg;

    printf("실수를 입력하시오 : ");
    scanf("%lf", &x);

    printf("실수를 입력하시오 : ");
    scanf("%lf", &y);

    printf("실수를 입력하시오 : ");
    scanf("%lf", &z);

    sum  = x + y + z;
    avg = sum / 3.0;

    printf("합은 %lf이고 평균은 %lf입니다.\n", sum, avg);

    return 0;
}