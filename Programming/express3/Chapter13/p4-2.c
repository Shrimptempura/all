#include <stdio.h>
struct complex 
{
	double real;
	double imag;
};

struct complex add(struct complex c1, struct complex c2) {
	struct complex result;
	result.real = c1.real+c2.real;
	result.imag = c1.imag+c2.imag;

	return result;
}

struct complex sub(struct complex c1, struct complex c2) {
	struct complex result;
	result.real = c1.real+c2.real;
	result.imag = c1.imag+c2.imag;

	return result;
}

struct complex mul(struct complex c1, struct complex c2) {
	struct complex result;
	result.real = c1.real*c2.real-c1.imag*c2.imag;
	result.imag = c1.real*c2.imag+c1.imag*c2.real;

	return result;
}

void print(struct complex c) {
	printf("%f+%fi\n", c.real,c.imag);
}

int main(void) 
{
	struct complex c1= {1.0, 2.0};
	struct complex c2= {2.0, 3.0};
	struct complex c3;
	c3 = add(c1, c2);
	print(c3);

	return 1;
}