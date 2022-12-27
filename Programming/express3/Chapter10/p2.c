// 크기가 10인 1차원 배열에 난수를 저장한 후에, 최대값과 최소값을 출력하는 프로그램
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));
    int ary[10];
    int i, min, max;

    // 1차원 배열에 난수 저장
    for(i = 0; i < 10; i++)
    {
        ary[i] = rand() % 100;
    }                               // 밑에 for문이랑 합치면 안되는 이유:
                                    // 0이 증가할려면 쭉~ 밑으로 내리고 올려야 하는데
                                    // 처음에 0이 박혀서 최소값 0 고정됨;
    min = max = ary[0];
    for (i = 0; i < 10; i++)
    {
        if (max < ary[i])
            max = ary[i];
        if (min > ary[i])
            min = ary[i];
    }

    printf("%d %d\n", max, min);

    return 0;
}