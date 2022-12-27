// 순환기법을 이용하여 지수값을 계산하는 함수 power(int base, int power_raised)를 작성
// 하고 테스트해보자, power(2, 3)가 호출되면 2 ^ 3을 계산하여 반환하자
#include <stdio.h>

double power(int base, int power_raised);

int main(void)
{
    int base, power_raised;
    printf("밑수 : ");
    scanf("%d", &base);

    printf("지수 : ");
    scanf("%d", &power_raised);

    printf("%d ^ %d = %d\n", base, power_raised, (int)power(base, power_raised));

    return 0;
}

double power(int base, int power_raised)
{
    if (power_raised == 1)
        return base;
    else 
        return base * power(base, power_raised -1);
}