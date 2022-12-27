// 월급에 붙는 소득세를 계산하는 함수 get_tax(int incoome), 과표 구간은 
// 1000만원 이하 8%, 1000만원 초과 10%
#include <stdio.h>

int get_tax(int income);

int main(void)
{
    int income;

    printf("소득을 입력하시오 : ");
    scanf("%d", &income);

    printf("소득세는 %d입니다.\n", get_tax(income));
    return 0;
}

int get_tax(int income)
{
    if (income > 1000)
    {
        return (int)(1000 * 0.08 + (income - 1000) * 0.1);
    }
    else
    {
        return (int)(income * 0.08);
    }
}