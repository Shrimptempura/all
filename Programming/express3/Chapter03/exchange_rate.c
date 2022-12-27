// 사용자가 입력하는 원화를 달러화로 계산하여 출력해보자, 1달러 = 1120.00(실수 저장)
// 사용자로부터 받는 원화는 정수 변수에 저장한다. 원화를 환율로 나누자
#include <stdio.h>

int main(void)
{
    double exrate;      // 환율
    int money;          // 원화
    double rate;

    printf("환율을 입력하시오 : ");
    scanf("%lf", &exrate);

    printf("원화 금액을 입력하시오 : ");
    scanf("%d", &money);

    rate = money / exrate;

    printf("원화 %d원은 %lf달러 입니다.\n", money, rate);

    return 0;
}