// 오일러의 수 구하기 (반복문)
// e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! 의 표현식의 n값을 입력받은 근사값을 출력
#include<stdio.h>

int main(void)
{
	float e = 1.0;
	int n, i, denom = 1;
	
	printf("Enter the n value: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
		e += 1.0f / (denom *= i);
	
	printf("Approximation is %f", e);
	
	return 0;
}
// 2중 for문
#include <stdio.h>

int main(void)
{
	int n; float e = 1.0;

	printf("Enter an integer: ");
	scanf("%d", &n);

	for (int a = 1; a <= n; a++)
    {
		int product = 1;
		for (int b = 1; b <= a; b++)
			product *= b; 
		e += 1.0f / product;
	}
	printf("The value of e is %.5f\n", e);
}

// 함수를 이용한 오일러의 수
#include <stdio.h>

double factorial(double n);

int main(void)
{
    int num, i;
    double j, k;
    k = 1;

    printf("어디까지 계산할까요? ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        j = 1 / factorial(i);
        k += j;
    }

    printf("오일러의 수는 %lf입니다.\n", k);

    return 0;
}

double factorial(double n)
{
    double i, j;
    j = 1;
    for (i = 1; i <= n; i++)
    {
        j *= i;
    }

    return j;
}