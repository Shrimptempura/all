// 사용자로부터 2개의 정수를 입력받아서 첫번째 정수를 두번째 정수로 나는 몫과 나머지
#include <stdio.h>

int main(void)
{
    int x, y;

    printf("두개의 정수를 입력하시오 : ");
    scanf("%d%d", &x, &y);

    printf("몫 : %d 나머지 %d\n", x / y, x % y);

    return 0;
}