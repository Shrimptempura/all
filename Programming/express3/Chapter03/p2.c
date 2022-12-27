// 마일을 미터로 환산해보자, 사용자로부터 마일단위로 거리를 입력받아서 변수에 저장한다.
// 이 변수에 1,609를 곱해서 미터로 변환한다. 실수값 이용하여 화면 출력하자
#include <stdio.h>

int main(void)
{
    double mile;
    double meter;

    printf("마일을 입력하시오 : ");
    scanf("%lf", &mile);

    meter = mile * 1609;
    printf("%.1lf마일은 %lf입니다.\n", mile, meter);

    return 0;
}