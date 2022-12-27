// 3개의 정수 값을 입력받아서, 3개의 정수 값중 최대값을 출력하는 프로그램 작성
#include <stdio.h>

int main(void)
{
    int x, y, z, max;

    printf("3개의 정수 값을 입력하시오 : ");
    scanf("%d%d%d", &x, &y, &z);

    max = (x > y) ? x : y;
    max = (max > z) ? max : z;
    
    printf("최대값 : %d\n", max);

    return 0;
}