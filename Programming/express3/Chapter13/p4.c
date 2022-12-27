// 구조체를 이용하여 복소수를 정의하고 복소수의 덧셈을 수행하는 함수를 작성 및 테스트
#include <stdio.h>

typedef struct  complex {
    double real;
    double imag;
} COMPLEX;

void complex_add(COMPLEX x1, COMPLEX x2);

int main(void)
{
    COMPLEX x1, x2;

    printf("첫 번째 복소수의 실수부 : "); scanf("%lf", &x1.real);
    printf("두 번째 복소수의 실수부 : "); scanf("%lf", &x1.imag);
    printf("셋 번째 복소수의 실수부 : "); scanf("%lf", &x2.real);
    printf("넷 번째 복소수의 실수부 : "); scanf("%lf", &x2.imag);

    complex_add(x1, x2);

    return 0;
}

void complex_add(COMPLEX x1, COMPLEX x2)
{
    COMPLEX result;
    result.real = x1.real + x2.real;
    result.imag = x1.imag + x2.imag;

    printf("복소수의 합\n");
    printf("실수부 : %f\n", result.real);
    printf("허수부 : %f\n", result.imag);
}