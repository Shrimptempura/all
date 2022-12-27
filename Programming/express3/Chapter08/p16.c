// 오일러의 수 e는 자연 로그의 밑수로 사용된다. 팩토리얼 함수를 호출하여 오일러의 수
// 계산 프로그램 짜기,
#include <stdio.h>

double factorial(int num);

int main(void)
{
    int num;

    printf("어디까지 계산할까요? : ");
    scanf("%d", &num);

    printf("오일러의 수는 %lf입니다.\n", factorial(num));

    return 0;
}

double factorial(int num)
{
    double e = 1, res = 1, i;

    for (i = 1; i <= num; i++)
    {
        res *= i;
        e += 1 / res;
    }

    return e;
}