// 조건연산자; max_value = (x > y) ? x: y; x가 y보다 크면 x, 그렇지 않으면 y
// printf도 응용가능 (age >= 20) ? pf("adf"): pf(asdfadf);
#include <stdio.h>

int main(void)
{
    int x, y;

    printf("첫번째 수 = ");
    scanf("%d", &x);

    printf("두번째 수 = ");
    scanf("%d", &y);

    printf("큰 수 = %d\n", (x > y) ? x : y);
    printf("작은 수 = %d\n", (x < y) ? x : y);

    return 0;
}