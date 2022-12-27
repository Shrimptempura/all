// 달의 중력은 지구의 약 17%이다. 자신의 몸무게를 입려받아서 달의 몸무게를 계산해라
// 실수형으로 작성한다.
#include <stdio.h>

int main(void)
{
    double weight;
    double moon_weight;

    printf("몸무게를 입력하세요(단위 : kg): ");
    scanf("%lf", &weight);

    moon_weight = weight * 0.17;

    printf("달에서의 몸무게는 %lf입니다.\n", moon_weight);

    return 0;
}