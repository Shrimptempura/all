#include <stdio.h>

void get_sum_diff(int x, int y, int *p_sum, int *p_diff);

int main(void)
{
    int x, y;
    int p_sum, p_diff;

    printf("첫 번째 정수 : ");
    scanf("%d", &x);

    printf("두 번째 정수 : ");
    scanf("%d", &y);

    get_sum_diff(x, y, &p_sum, &p_diff);
    printf("sum = %d, diff = %d\n", p_sum, p_diff);

    return 0;
}

void get_sum_diff(int x, int y, int *p_sum, int *p_diff)
{
    *p_sum = x + y;
    *p_diff = x - y;
}