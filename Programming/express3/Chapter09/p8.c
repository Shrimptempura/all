// 주어진 정수가 몇 개의 자리수를 가지고 있는지 계산하는 프로그램, 순환을 이용
#include <stdio.h>

int get_digit_sum(int num);

int main(void)
{
    int num;
    printf("정수를 입력하시오 : ");
    scanf("%d", &num);

    printf("자리수의 개수 : %d\n", get_digit_sum(num));

    return 0;
}

int get_digit_sum(int num)
{
    static int count = 1;
    if (num / 10 != 0)
    {
        get_digit_sum(num / 10);
        count++;
    }

    return count;
}
