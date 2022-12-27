// 정수값을 받아서 2진수 형태로 출력하는 함수 display_bit(int value)를 작성하자 
//  p6의 GET_BIT(n, pos) 사용
#include <stdio.h>
#define GET_BIT(n, pos) ((n) & (1 << (pos)))

void display_bit(int value);

int main(void)
{
    int value;

    printf("정수값을 입력하시오 : ");
    scanf("%d", &value);

    display_bit(value);
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
