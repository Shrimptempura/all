#include <stdio.h>
void show_digit(int n)
{
	int i;
	int binary[32] = {0};
	for(i = 0; i < 32 && n > 0; i++)
	{
		binary[i] = n % 2;
		n = n / 2;
	}

	for(i--; i >= 0; i--)
	{
		printf("%d", binary[i]);
	}
	printf("\n");
	}
	
int main(void)
{
	int num;
	printf("10진수 정수를 입력하시오 : ");
	scanf("%d", &num);

	show_digit(num);

	return 0;
}