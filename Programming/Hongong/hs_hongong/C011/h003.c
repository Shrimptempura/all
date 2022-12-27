#include <stdio.h>

int gcount;

void sub()
{
	static int scount;
	int acount = 0;

	printf("gcount = %d\n", gcount);
	printf("scount = %d\n", scount);
	printf("acount = %d\n", acount);
	printf("======================\n");

	gcount++;
	scount++;
	acount++;
}

void main()
{
	sub();
	sub();
	sub();
}
