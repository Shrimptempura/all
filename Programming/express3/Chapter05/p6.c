// int형 정수를 비트 연산자를 사용하여 2의 보수로 변환 프로그램
// 2의 보수는 먼저 전체 비트를 반전시킨후에 1을 더하면 된다.
#include <stdio.h>

int main(void)
{
    int x;

    printf("정수를 입력하시오 : ");
    scanf("%d", &x);

    x = ~x;
    x += 0x1;

    printf("2의 보수 : %d\n", x);

    return 0;
}
// 비트 반전 --> '~'이용, 12행;        1을 더함 x += 0x1;