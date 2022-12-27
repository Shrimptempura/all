// 1부터 10까지의 합 계산 (재귀호출 사용)  int rec_func(int n)
#include <stdio.h>

int rec_func(int n);

int main(void)
{   
    int res;
    res = rec_func(10);
    printf("1부터 n까지의 합 재귀 사용 : %d\n", res);

    return 0;
}

int rec_func(int n)
{
    if (n == 1) return 1;
    else return (n + rec_func(n - 1));
}