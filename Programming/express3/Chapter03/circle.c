// 사용자로부터 원의 반지름을 입력받고, 이 원의 면적을 구한 다음, 화면에 출력한다.
// 원의 면적을 구할려면 실수형 계산을 해야 한다. 따라서 실수형 변수를 사용해 보자
#include <stdio.h>
#define PIE 3.14

int main(void)
{
    double radius;
    double measure;

    printf("반지름을 입력하시오 : ");
    scanf("%lf", &radius);

    measure = PIE * radius * radius;
    printf("원의 면적 : %lf\n", measure);

    return 0;
}