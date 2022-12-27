// power.c
#include "power.h"

double power(int x, int y)
{
    double result = 1.0;        // 곱이므로 초기값 1
    int i;

    for (i = 0; i < y; i++)
        result *= x;

    return result;
}