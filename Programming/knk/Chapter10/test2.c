#include <stdio.h>

#define MAX_DIGITS 10

char digits[4][4 * MAX_DIGITS];
const int segment[10][7] =    {{1,1,1,1,1,1,0}, {0,1,1,0,0,0,0},
                                {1,1,0,1,1,0,1}, {1,1,1,1,0,0,1},
                                {0,1,1,0,0,1,1}, {1,0,1,1,0,1,1},
                                {1,0,1,1,1,1,1}, {1,1,1,0,0,0,0},
                                {1,1,1,1,1,1,1}, {1,1,1,1,0,1,1}};

void process_digit(int, int);
void print_digits(void);
void clear_digits(void);

int main(void)
{
	int a;
	int position = 0;

	clear_digits();

	printf("Enter a number: ");

	while (position < 40)
	{
		a = getchar() - '0';
		switch(a)
		{
			case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
				process_digit(a, position);
				position += 4;
				break;
		}

	}

	print_digits();
	return 0;
}

void process_digit(int digit, int position)
{
	if (segment[digit][0] == 1)
	{
		digits[0][position + 1] = '_';
	}

	if (segment[digit][1] == 1)
	{
		digits[1][position+2] = '|';
	}

	if (segment[digit][2] == 1)
	{
		digits[2][position + 2] = '|';
	}

	if (segment[digit][3] == 1)
	{
		digits[2][position+1] = '_';
	}

	if (segment[digit][4] == 1)
	{
		digits[2][position] = '|';
	}

	if (segment[digit][5] == 1)
	{
		digits[1][position] = '|';
	}

	if (segment[digit][6] == 1)
	{
		digits[1][position + 1] = '_';
	}
	
}

void print_digits(void)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < (MAX_DIGITS*4); j++)
			printf("%c", digits[i][j]);
		printf("\n");
	}
}

void clear_digits(void)
{
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < (MAX_DIGITS*4); j++)
			digits[i][j] = ' ';
}