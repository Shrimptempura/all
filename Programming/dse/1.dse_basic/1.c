// cal_time.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    clock_t start, stop;
    double duration;
    start = clock();    // 측정 시작

    for (int i = 0; i < 1000000; i++)
        ;
    
    stop = clock();     // 측정 종료
    duration = (double)(stop - start)   / CLOCKS_PER_SEC;
    printf("수행시간은 %f초 입니다.\n", duration);

    return 0;
}

/* 몇가지 문제점들
- 알고리즘을 구현하고 테스트하는 것이 필요
- 알고리즘이 비교적 단순한 경우 쉽게 구현하지만, 복잡한 경우에도 구현해야 됨
- 2개의 알고리즘을 비교하려면 반드시 똑같은 하드웨어를 사용하여 알고리즘들의 수행시간을 측정
- 사용한 소프트웨어 환경 차이
- 실험되지 않은 입력에 대해서는 수행시간을 주장할 수 없다.
*/