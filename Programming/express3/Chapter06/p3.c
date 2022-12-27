// 사용자로부터 3개의 정수를 읽은 후 if-else문을 사용하여 가장 큰 작은 값을 결정
#include <stdio.h>

int main(void)
{
    int x, y, z, res;

    printf("3개의 정수를 입력하시오 : ");
    scanf("%d %d %d", &x, &y, &z);

    if ((x < y) && (x < z))
        res = x;

    else if ((y < x) && (y < z))
        res = y;

    else if ( (z < y) && (z < x))
        res = z;
    else
        printf("잘못된 값을 입력하였습니다.\n");

    printf("제일 작은 정수는 %d입니다.\n", res);

    return 0;
}