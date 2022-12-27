// 섭씨 온도와 화씨 온도의 수식 ->  C = 5 / 9 (F - 32), 사용자로부터 화씨 온도를 받아서
// 섭씨 온도로 환산하여 출력해라. 온도는 실수형으로 처리한다.
#include <stdio.h>

int main(void)
{
    double fah;     // 화씨
    double cel;     // 섭씨

    printf("화씨 값을 입력하시오 : ");
    scanf("%lf", &fah);

    cel = (5.0 / 9.0) * (fah - 32.0);

    printf("섭씨 값은 %lf입니다.\n", cel);

    return 0;
}