// 사용자로부터 입력받은 정수를 비트  이동시키는 프로그램 작성
// 먼저 정수 변수의 값을 입력받은 후에 이동시킬 방향, 이동할 거리를 사용자로부터
// 입력받는다. 비트 이동 전후에 정수의 값을 비트로 출력하도록 한다.
// p7의 display_bit()을 사용한다.
#include <stdio.h>
#define GET_BIT(n, pos) ((n) & (1 << (pos)))

void display_bit(int value);

int main(void)
{
    int value;
    int dir;
    int distance;

    printf("정수 값을 입력하시오 : ");
    scanf("%d", &value);

    printf("왼쪽 이동은 0, 오른쪽 이동은 1을 입력하시오 : ");
    scanf("%d", &dir);

    printf("이동시킬 거리 : ");
    scanf("%d", &distance);

    printf("이동 전 : ");
    display_bit(value);

    printf("이동 후 : ");
    if (dir == 0)
        display_bit(value << distance);
    else
        display_bit(value >> distance);

    return 0;
}

void display_bit(int value)
{
    int i;
    for (i = 31; i >= 0; i--)
    {
        if (GET_BIT(value, i))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}