// 사용자로부터 2개의 정수를 받아서 더한 결과 출력하기
#include <stdio.h>

int main(void)
{
    int x, y, sum;
    printf("첫번째 숫자를 입력하시오 : ");
    scanf("%d", &x);

    printf("두번째 숫자를 입력하시오 : ");
    scanf("%d", &y);

    sum = x + y;
    printf("두 수의 합 : %d\n", sum);

    return 0;
}
