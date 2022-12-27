// 주어진 실수를 제곱하여 반환하는 함수 double square(double)을 작성한다.
// squrare() 함수를 테스트하는 프로그램 작성해라
#include <stdio.h>

double square(double num);

int main(void)
{
    double num;

    printf("주어진 정수를 입력하시오 : ");
    scanf("%lf", &num);
                            // 새로운 변수 = square(num); 이 더 가독성이 좋다.
    printf("주어진 정수 %lf의 제곱은 %lf입니다.\n", num, square(num)); // n;

    return 0;
}

double square(double num)
{
    double res;
    res = num * num;

    return res;
}