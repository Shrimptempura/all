#include <stdio.h>

typedef struct food {
	char name[100];
	int calories;
} Food;

void add_calories(Food info[], int count);

int main(void)
{
	Food info[10];
	int i = 0, count = 0;
	char an;

	while(1)
    {
		printf("음식정보를 저장하시겠습니까?(y/n)");
		scanf("%c", &an);
		fflush(stdin);

		if(an == 'n')
			break; 

		printf("음식이름: ");
		gets(info[i].name);
		printf("칼로리: ");
		scanf("%d", &info[i].calories);
		fflush(stdin);
		i++;
		count++;
	}
	add_calories(info, count);

    return 0;
}

void add_calories(Food info[], int count)
{
	int i, sum=0;
	for(i = 0; i < count; i++)
		sum+=info[i].calories;
	printf("총 칼로리는 %d입니다", sum);
}

