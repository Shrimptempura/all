#include <stdio.h>
long factorial(int n);

int main(void)
{
	int n = 0;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	printf("%d!은 %ld입니다. \n", n, factorial(n));

	return 0;
}

long factorial(int n)
{
	printf("factorial(%d)\n", n);

	if (n <= 1) 
    {
        printf("resturn : %d\n", 1);
        return 1;
    }

	else 
    
        return n * factorial(n - 1);
}