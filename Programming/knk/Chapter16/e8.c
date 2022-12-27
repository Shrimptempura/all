/*
Let color be the following structure:
(a) Write a declaration for a const variable named MAGENTA of type struct color 
    whose members have the values 255, 0 and 255, respectively.
(b) (C99) Repeat part (a), but use a designated initializer that doesn't specify 
    the value of green, allowing it to defaul to 0.
*/

#include <stdio.h>

struct color {
	int red;
	int green;
	int blue;
};

int main(void)
{
	const struct color MAGENTA = {255, 0, 255};
	const struct color MAGENTA2 = {.red = 255, .blue = 255};
	
	printf("MAGENTA1: %d %d %d\n", MAGENTA.red, MAGENTA.green, MAGENTA.blue);
	printf("MAGENTA2: %d %d %d\n", MAGENTA2.red, MAGENTA2.green, MAGENTA2.blue);
	
	return 0;
}