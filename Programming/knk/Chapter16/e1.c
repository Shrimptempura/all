/*
In the following declarations, the x and y structures have members named x and y:

struct { int x, y;} x;
struct { int x, y;} y;
Are these declarations legal on an individual basis? Could both declarations 
appear as shown in a program? Justify your answer.
*/

#include <stdio.h>

int main(void)
{
	struct { int x, y; } x;
	struct { int x, y; } y;
	
	x.x = 1;
	x.y = 2;
	y.x = 3;
	y.y = 4;
	
	printf("%d %d %d %d\n", x.x, x.y, y.x, y.y);
	return 0;
}