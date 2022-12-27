// 계산기 만들기
#include <stdio.h>

int main(void)
{
    int x, y;
    char ch;

    printf("수식을 입력하시오(예: 2 + 5)");
    scanf("%d %c %d", &x, &ch, &y);

    if (ch == '+')
        printf("%d %c %d = %d\n", x, ch, y, x + y);
    else if (ch == '-')
        printf("%d %c %d = %d\n", x, ch, y, x - y);
    else if (ch == '*')
        printf("%d %c %d = %d\n", x, ch, y, x * y);
    else if (ch == '/')
        printf("%d %c %d = %d\n", x, ch, y, x / y);
    else if (ch == '%')
        printf("%d %c %d = %d\n", x, ch, y, x % y);
    else
        printf("잘못된 수식입니다.\n");

    return 0;
}
/* 문제를 아에 잘못 들어간 경우..
scanf를 x, ch, y 받은후 내가 한대로 일일히 값 대입이 아니라 더 간단히
if (ch == '+')
    res = x + y;    요렇게 각각 부호에 따라 받은후

마지막에 pf("%d %c %d = %d\n", x, ch, y, res); 박으면 된다.
*/
