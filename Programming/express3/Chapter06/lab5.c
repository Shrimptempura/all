// 계산기 만들기 switch 사용
#include <stdio.h>

int main(void)
{
    int x, y, res;
    char ch;

    printf("수식을 입력하시오(예: 2 + 5) : \n");
    scanf("%d %c %d", &x, &ch, &y);

    switch(ch)
    {
        case '+': res = x + y; break;
        case '-': res = x - y; break;
        case '*': res = x * y; break;
        case '%': res = x % y; break;
        case '/': res = x / y; break;
        default: printf("잘못된 수식입니다.\n"); break;
    }

    printf("%d %c %d = %d\n", x, ch, y, res);

    return 0;
}