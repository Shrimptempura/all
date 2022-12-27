// e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! 에서 
// 1 / n!의 값이 엡실론 값을 넘지 않도록해서 입력받은 근사값을 출력

#include <stdio.h>

int main(void)
{
	float e, term, E;
	int n, i, denom;
	
	printf("Enter epsilon: ");
	scanf("%f", &E);
	
	for(i = 1, denom = 1, term = 1.0f, e = 1.0f; term > E; i++)
    {
		term = (1.0f / (denom *= i));
		e += term;
	}
	
	printf("Approximation is %f", e);
	return 0;
}
////////////////////////////////////////////////////////////
#include <stdio.h>

int main(void)
{
    int i, n, factorial;
    double e = 1.0, eps;
    
    printf("Enter epsilon: ");
    scanf("%lf", &eps);
    
    factorial = 1;
    for (i = 1 ;; i++) 
    {
        // Calculate Factorial
        factorial *= i;
        
        // Calculate exponential
        if ((1.0 / factorial) < eps)
            break;
        e += (1.0 / factorial);
    }
    printf("e: %f\n", e);
    
    return 0;
}