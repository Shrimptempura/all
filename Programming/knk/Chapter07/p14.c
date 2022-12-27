// Newton's method, copy;
// p14-1.c 더 정확
#include <stdio.h>
#include <math.h>

int main(void)
{
	int x;
	double y = 1.0, share = 0.0, average = 0.0, tmp;
	
	printf("Enter x value: ");
	scanf("%d", &x);
	
	do {
		share = x / y;
		average = (y + share) / 2;
		tmp = y;
		y = average;
	} while (fabs(tmp - y) > y * .00001);
	
	printf("%.5lf\n", y);

	return 0;
}