// p8번 유사문제, 자리수의 합계를 계산하는 프로그램 순환 사용
#include <stdio.h>

int get_digit_sum(int num);

int main(void)
{
    int num;
    printf("정수를 입력하시오 : ");
    scanf("%d", &num);

    printf("자리수의 합 : %d\n", get_digit_sum(num));

    return 0;
}

int get_digit_sum(int num)
{
    if (num == 0)
        return 0;

    return ((num % 10) + get_digit_sum(num / 10));
}
