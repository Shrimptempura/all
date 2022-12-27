// E = mv^2 / 2.0, 사용자로부터 질량(m)과 속도(v)를 받아서 운동에너지(E)를 작성
// 모든 변수는 double을 사용한다.
#include <stdio.h>

int main(void)
{
    double m;       // 질량
    double v;       // 속도
    double E;       // 운동에너지

    printf("질량(kg) : ");
    scanf("%lf", &m);

    printf("속도(m/s) : ");
    scanf("%lf", &v);

    E = 0.5 * m * v * v;

    printf("운동에너지(J) : %lf\n", E);

    return 0;
}