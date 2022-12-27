// 키보드에서 입력받은 정수가 홀수인지 짝수인지 판별 프로그램 작성
#include <stdio.h>

int main(void)
{
    int x;

    printf("정수를 입력하시오 : ");
    scanf("%d", &x);

    if (x % 2 == 0)
        printf("입력된 정수는 짝수입니다.\n");
    else
        printf("입력된 정수는 홀수입니다.\n");

    return 0;
}