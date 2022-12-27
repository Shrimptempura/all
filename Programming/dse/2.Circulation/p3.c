/*
피보나치 수열
fib(n)
{
    0       n = 0
    1       n = 1
    fib(n - 2) + fib(n - 1)     otherwise
}
*/

// 순환적인 피보나치 수열 계산 프로그램
int fib(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return (fib(n - 1) + fib(n - 2));
}
/*
위의 함수는 매우 단순하고 이해하기 쉽지만, 매우 비효율적    -> 계속 2개씩 쪼개지기 때문
순환적 피보나치 수열 알고리즘의 시간 복잡도 = O(2^n)
*/

// 반복적인 피보나치 수열 계산 프로그램
int fib_iter(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    int pp = 0;
    int p = 1;
    int result = 0;

    for (int i = 2; i <= n; i++)
    {
        result = p + pp;
        pp = p;
        p = result;
    }
    return result;
}