// 팩토리얼 계산 프로그램에서는 반복적인 방법이 순환적인 방법에 비하여 속도가 빠르다. 예제 보자
// 반복적인 거듭제곱 계산 프로그램
double slow_power(double x, int n)
{
    int i;
    double result = 1.0;

    for (i = 0; i < n; i++)
        result *= x;
    return result;
}

// 순환적인 거듭제곱 계산
power(x, n);
    if n == 0
        then return 1;
    else if n이 짝수
        then return power(x * x, n / 2);
    else if n이 홀수
        then return x * power(x * x, (n - 1) / 2);

/*
x ^ n = (x ^ 2) ^ (n / 2) 공식 이용

n이 짝수이면
power(x, n) = power(x ^ 2, n / 2)
= (x ^ 2) ^ (n / 2)
= x ^ 2(n / 2)
= x ^ n

n이 홀수라면
power(x, n) = x * power(x ^ 2, (n - 1) / 2)
= x * (x ^ 2) ^ (n - 1) / 2
= x * x ^ (n - 1)
= x ^ n

문제의 크기가 줄어듦을 유의, 처음 : n승, n / 2승, n / 4승..
*/

// 순환적인 거듭제곱 계산 프로그램
double power(double x, int n)
{
    if (n == 0) return 1;
    else if ((n % 2) == 0)
        return power(x * x, n / 2);
    else return x * power(x * x, (n - 1) / 2);
}

/*
순환적과 반복중 순환적이 더 빠르다.
반복 = 7.11         순환 = 0.47
그 이유는?
한번 순환 호출을 할 때마다 문제의 크기는 약 절반으로 줄어든다.
반복 호출은 한 루프마다 한번의 곱셈

반복 = O(n)         순환 = O(log2n)
*/

