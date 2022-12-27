// 1부터 n까지의 합 (1 + 2 + 3 + ... + n)의 계산을 순환기법 이용하여 작성
#include <stdio.h>

int get_digit_sum(int n);

int main(void)
{
    int num;

    printf("정수를 입력하시오 : ");
    scanf("%d", &num);

    printf("1부터 %d까지의 합 = %d\n", num, get_digit_sum(num));

    return 0;
}

int get_digit_sum(int n)
{
    if(n == 1)
        return 1;
    else
        return n + get_digit_sum(n - 1);
}