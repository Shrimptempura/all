// do while 문을 사용하여 사용자가 0을 입력할 때까지 숫자들을 더하는 프로그램 작성
#include <stdio.h>

int main(void)
{
    int num, sum = 0;

    do
    {
        printf("정수를 입력하시오 : ");
        scanf("%d", &num);

        sum += num;
    } while(num != 0);

    printf("숫자들의 합 : %d\n", sum);

    return 0;
}