// 0.0부터 1.0까지의 난수 반환함수 f_rand()작성후 5번 호출하자
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double f_rand(void);

int main(void)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%lf ", f_rand());
    }
    
    return 0;
}

double f_rand(void)
{
    return rand() / (double)RAND_MAX;
}