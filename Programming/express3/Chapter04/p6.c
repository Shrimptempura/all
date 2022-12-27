// 3.32 * 10^-3 + 9.76 * 10^-8 수식값 출력하기
#include <stdio.h>

int main(void)
{
    double x;
    x = ((3.32e-3) + (9.76e-8));
    printf("%lf\n", x);

    return 0;
}
// 3.32 * 10^-3 == 3.32e-3, <즉> 10의 몇 제곱을 e의 몇제곱 , e-3, e-8 붙여서 나타냄