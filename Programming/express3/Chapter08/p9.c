// rand()함수를 이용하여 0 또는 1 값을 무작위 반환하는 함수 b_rand()작성후 5번 출력하자
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand(void);

int main(void)
{   
    int i;
    srand((unsigned)time(NULL));

    for (i = 0; i < 5; i++)
    {
        printf("%d ", b_rand());
    }

    return 0;
}

int b_rand(void)
{
    return rand() % 2;
}   