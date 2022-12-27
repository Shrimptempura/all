// 구의 표면적고 체적, 구의 반지름은 실수로 입력, 파이 값은 기호상수 사용
// A = 4 * pie * r ^ 2,   A = (4 / 3) * pie * r ^ 3
#include <stdio.h>

int main(void)
{
    double r;
    const double PIE = 3.141592;
    double surface;     // 표면적
    double vol;          // 체적

    printf("구의 반지름 입력하세요 : ");
    scanf("%lf", &r);

    surface = 4.0 * PIE * r * r;
    vol = (4.0 / 3.0) * PIE * r * r * r;

    printf("표면적은 %lf입니다.\n", surface);
    printf("체적은 %lf입니다.\n", vol);

    return 0;
}