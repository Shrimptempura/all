#include <stdio.h>

void get_num_diff(int x, int y, int *p_sum, int *p_diff);

int main(void)
{
    int x, y;
    int sum, diff;

    x = 100;
    y = 200;
    get_num_diff(x, y, &sum, &diff);

    printf("원소들의 합 = %d\n", sum);
    printf("원소들의 차 = %d\n", diff);


    return 0;
}

void get_num_diff(int x, int y, int *p_sum, int *p_diff)
{
    *p_sum = x + y;
    *p_diff = x - y;
}