//section 8.1의 interest.c 프로그램을 월마다 복리를 얻어 그 값을 출력하도록 수정

#include <stdio.h>

#define NUM_RATE ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
	int i, low_rate, num_years, year;
	double value[5];
	
	printf("Enter interest: ");
	scanf("%d", &low_rate);
	printf("Enter number of years: ");
	scanf("%d", &num_years);
	
	printf("\nYears");
	for (int i = 0;i < NUM_RATE;i++)
    {
		printf("%9d%%", low_rate + i);
		value[i] = INITIAL_BALANCE;
	}
	printf("\n");
	
	for (year = 1;year <= num_years;year++)
    {
		printf("%3d    ", year);
		for(int i = 0;i < NUM_RATE;i++)
        {
			for(int j = 0;j < 12;j++)
				value[i] += (low_rate + i) / 100.0 / 12 * value[i];
			printf("%10.2f", value[i]);
		}
		printf("\n");
	}
	return 0;
} 