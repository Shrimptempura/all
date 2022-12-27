#include <stdio.h>

typedef struct 
{
	double real;
	double imag;
} Complex;

void add_complex(Complex x, Complex y);

int main(void)
{
	Complex x, y;

	printf("첫 번째 복소수의 실수부: ");	scanf("%lf", &x.real);
	printf("첫 번째 복소수의 허수부: ");	scanf("%lf", &x.imag);
	printf("두 번째 복소수의 실수부: ");	scanf("%lf", &y.real);
	printf("두 번째 복소수의 허수부: ");	scanf("%lf", &y.imag);

	add_complex(x, y); 

    return 0;
}

void add_complex(Complex x, Complex y)
{
	printf("합의 실수부: %lf\n", x.real+y.real);
	printf("합의 허수부: %lf\n", x.imag+y.imag);
}