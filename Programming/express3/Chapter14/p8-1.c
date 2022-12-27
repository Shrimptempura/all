#include <stdio.h>
#define HEIGHT 3
#define WIDTH 3 

void array_copy(int src[][WIDTH], int dst[][WIDTH]);
void array_print(int a[][WIDTH]);

int score[HEIGHT][WIDTH]= { 
    {100, 30, 67}, 
    {89, 50, 12}, 
    {19, 60, 90},
    };  

int tmp[HEIGHT][WIDTH];

int main(void) 
{
	array_copy(score, tmp);
	array_print(tmp);

	return 0;
}

void array_print(int a[][WIDTH]) 
{
	int r, c;
	for (r = 0; r < HEIGHT; r++) 
    {
		for (c = 0; c < WIDTH; c++)
            printf("%d ", a[r][c]);
		printf("\n");
	}
}

void array_copy(int src[][WIDTH], int dst[][WIDTH]) 
{
	int *p = &src[0][0];
	int *end = &src[HEIGHT-1][WIDTH-1];
	int *q = &dst[0][0];

	while(p <= end) 
		*q++ = *p++;
}