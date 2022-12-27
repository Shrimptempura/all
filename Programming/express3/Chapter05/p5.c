// 100보다 작은 정수를 입력받아서 이것을 십의 자리, 일의 자리로 분리하여 출력
#include <stdio.h>

int main(void)
{
    int x;

    printf("정수를 입력하시오 : ");
    scanf("%d", &x);

    printf("십의 자리 : %d\n", x / 10);
    printf("일의 자리 : %d\n", x % 10);

    return 0;
}