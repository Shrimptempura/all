// 사용자로부터 2개의 정수를 받아서 첫 번째 정수가 두 번째 정수로 나누어 떨어지는지
// 즉 약수인지 검사 프로그램 작성
#include <stdio.h>

int main(void)
{
    int x, y;

    printf("정수를 입력하시오 : ");
    scanf("%d", &x);

    printf("정수를 입력하시오 : ");
    scanf("%d", &y);

    if (x % y == 0)
        printf("약수입니다.\n");
    else
        printf("약수가 아닙니다.\n");

    return 0;
}