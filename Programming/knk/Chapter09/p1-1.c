// 선택 정렬을 재귀형태 함수로 만들기, copy
// 재귀함수 효율성이 좋지 않음
#include<stdio.h>
#define MAX 100

void selection_sort(int [], int);

int main(void)
{
	int a[MAX], n;
    int i;
	
	printf("Enter the number of integer(1 - 100): ");
	scanf("%d", &n);
	
	printf("Enter integers: ");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	selection_sort(a, n);
	
	printf("Sorted integers: ");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
    printf("\n");
    
	return 0;
}

void selection_sort(int a[], int n)
{
    int i;

	if (n <= 0) 
        return;
	
	int temp, digit, max = 0;
	for (i = 0 ;i < n; i++)
    {
		if(a[i] > max)
        {
			digit = i;
			max = a[i];
		}
	}
	temp = a[n - 1];
	a[n - 1] = max;
	a[digit] = temp;
	
	return selection_sort(a, n - 1);
}