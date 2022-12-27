#include<stdio.h>

#define ROW 5
#define COL 5

int main(void)
{
	int box[ROW][COL], sum = 0, max, min;
	float average = 0.0f;
	
	for (int i = 0; i < ROW; i++)
    {
		printf("Enter student %d: ", i + 1);
		for (int j = 0; j < COL; j++)
			scanf("%d", &box[i][j]);
	}
	
	for (int i = 0; i < ROW; i++)
    {
		printf("\nStudent %d\'s ", i + 1);
		for (int j = 0; j < COL; j++)
        {
			sum += box[i][j];
		}
		printf("total: %d, average: %.1f\n\n", sum, average = (float)sum / COL);
		sum = 0;
	}
	
	for (int i = 0; i < COL; i++)
    {
		max = min = box[0][i];
		printf("Quiz %d\'s ", i + 1);
		for (int j = 0; j < ROW; j++)
        {
			if (box[j][i] > max) max = box[j][i];
			if (box[j][i] < min) min = box[j][i];
			sum += box[j][i];
		}
		printf("total: %d, highest: %d lowest: %d\n\n", sum, max, min);
		sum = 0;
	}
	printf("\n");
	return 0;
}