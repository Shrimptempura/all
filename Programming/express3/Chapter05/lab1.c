// 거스름돈 계산하기, 1. 사용자로부터 물건값을 입력받는다. 물건값은 100원 단위
// 2. 점원이 내어줘야 할 오천원, 천원, 오백원, 백원의 동전 개수를 출력, %와 / 사용하기
#include <stdio.h>

int main(void)
{
    int price;      // 물건값
    int money;      // 사용자가 낸 돈
    int w5000, w1000, w500, w100;
    int change;     // 낸돈 - 물건값

    printf("물건 값을 입력하시오 : ");
    scanf("%d", &price);

    printf("사용자가 낸 돈 : ");
    scanf("%d", &money);

    change = money - price;

    w5000 = change / 5000;     // 10000-3200=6800 / 5000 = 1.. 1800
    change %= 5000;     // 6800 % 5000 = 1800

    w1000 = change / 1000;     // 1800 / 1000 = 1... 800
    change %= 1000;      // 1800 % 1000 =800

    w500 = change / 500;    // 800 / 500 = 1... 300
    change %= 500;       // 800 % 500 = 300

    w100 = change / 100;    // 300 / 100 = 3

    printf("오천원권 : %d장\n", w5000);
    printf("천원권 : %d장\n", w1000);
    printf("오백원 동전 : %d개\n", w500);
    printf("백원 동전 : %d개\n", w100);

    return 0;
}