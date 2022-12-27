// 다항식 3x^2 + 7x + 11의 값을 계산하는 프로그램 작성하라. x의 값은 실수로 입력받는다.
#include <stdio.h>

int main(void)
{
    double x;
    double formula;

    printf("실수를 입력하세요 : ");
    scanf("%lf", &x);

    formula = (3 * x * x) + (7 * x) + 11;

    printf("다항식의 값은 %lf\n", formula);

    return 0;
}