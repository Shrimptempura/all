// 숫자를 입력받아 7segment 형식으로 출력하기
#include <stdio.h>
#include <ctype.h>
#define MAX_DIGIT 10

char digits[4][MAX_DIGIT * 4];

//각 세그먼트를 2진수 형태로 구현 
const int segments[MAX_DIGIT][7] = {{1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0},
                                    {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1},
                                    {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1},
                                    {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 1, 0},
                                    {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}};

//각 세그먼트의 위치를 2차원 x, y 좌표로 지정 
const int positions[7][2] = {{0, 1},
                            {1, 2},
                            {2, 2},
                            {2, 1},
                            {2, 0},
                            {1, 0},
                            {1, 1}};

void clear_digits_array(void);
void process_digit(int digit, int position);
void printf_digits_array(void);

int main(void)
{
	int digit, position = 0;
	
	clear_digits_array();
	
	printf("Enter a number: ");
	while ((digit = getchar()) != '\n')
    {
		if (isdigit(digit))
        {   //숫자가 아닌 것들은 무시 
			process_digit(digit - '0', position);
			position += 4;  // 한숫자당 4칸 사용
		}
	}
	printf_digits_array();
	return 0;
} 

void clear_digits_array(void)
{
	for (int i = 0; i < 4; i++)
    {
		for (int j = 0; j < MAX_DIGIT * 4; j++)
			digits[i][j] = ' ';
	}
}

void process_digit(int digit, int position) 
{
	if (position >= MAX_DIGIT * 4) return;  // 40 제한
	int x, y;
	for (int i = 0; i < 7; i++)
    {
		if (segments[digit][i])     // ex) 3 = {1, 1, 0, 1, 1, 0, 1};
        {
			x = positions[i][0];
			y = positions[i][1] + position;
			digits[x][y] = i % 3 == 0 ? '_' : '|';
		}
	}
}

void printf_digits_array(void)
{
	for (int i = 0; i < 4; i++)
    {
		for (int j = 0; j < MAX_DIGIT * 4; j++)
			printf("%c", digits[i][j]);
		printf("\n");
	}
}