// 함수 인수로서의 함수 포인터, 함수 포인터도 변수이기 때무에 함수 호출 시에 인수로 
// 전달이 가능하다. 함수 포인터가 인수로 전달되면 전달받은 함수 측에서는 이 함수 
// 포인터를 이요아혀 함수 호출을 할 수 있다. 이 기능을 이용시 호출된 함수가 특정한
// 함수를 호출해주도록 호출하는 측에서 결정할 수 있다.      pf3.c
#include <stdio.h>
#include <math.h>

double f1(double k);
double f2(double k);
double formula(double (*pf)(double), int n);

int main(void)
{
    printf("%f\n", formula(f1, 10));    // f1을 인수로 하여서 formula()를 호출한다.
    printf("%f\n", formula(f2, 10));
}

double formula(double (*pf)(double), int n)
{
    int i;
    double sum = 0.0;

    for (i = 1; i < n; i++)
        sum += pf(i) * pf(i) + pf(i) + 1;   // 함수 포인터를 이용하여 수식을 계산한다.

    return sum;
}

double f1(double k)
{
    return 1.0 / k;
}

double f2(double k)
{
    return cos(k);
}