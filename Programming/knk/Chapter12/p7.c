//section 11.4의 max_min 함수의 배열을 포인터를 사용해서 수정
#include<stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void) {
	int b[N], i, big, small, *q;
	q = b;
	
	printf("Enter %d numbers: ", N);
	while (q < b + N) {
		scanf("%d", q++);
	}
	q = b;
	max_min(q, N, &big, &small);
	
	printf("Largest: %d\n", big);
	printf("Smallest: %d\n", small);
	return 0;
} 

void max_min(int a[], int n, int *max, int *min) {
	int *p = a;
	
	*max = *min = p[0];
	while (p < a + N) {     // a[0] ~ a[10]
		if (*p > *max)
			*max = *p;
		else if (*p < *min)
			*min = *p;
		p++;
	}
}