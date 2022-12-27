// 삼각형 ABC와 삼각형 ADE는 닮음꼴 --> 성립; AC : AE = BC : DE
#include <stdio.h>

int main(void)
{
    double stick, stick_sd, pri, pri_he;

    printf("지팡이의 높이를 입력하시오 : ");
    scanf("%lf", &stick);

    printf("지팡이 그림자의 길이를 입력하시오 : ");
    scanf("%lf", &stick_sd);

    printf("피라미드까지의 거리를 입력하시오 : ");
    scanf("%lf", &pri);

    pri_he = stick * pri / stick_sd;

    printf("피라미드의 높이는 %lf입니다.\n", pri_he);

    return 0;
}