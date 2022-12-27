// 사용자가 연봉을 입력하면 월수령액을 계산하는 프로그램을 작성해보자
#include <stdio.h>

int main(void)
{
    int income;
    int m_paycheck;

    printf("연봉을 입력하시오(단위: 만원): ");
    scanf("%d", &income);
    
    m_paycheck = income / 12;
    printf("월수령액(단위: 만원): %d\n", m_paycheck);

    return 0;
}