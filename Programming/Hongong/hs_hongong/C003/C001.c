// 1. 크기가 10인 1차원 배열에 1~10 사이의 난수 10개를 발생시켜 저장한 후에, 
// 그 배열에서 최댓값과 최솟값을 찾아서 출력하는 프로그램을 작성하라.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_ary(int *ary);
void find_number(int *ary);

int main(void)
{
    int ary[10] = {0, };

    print_ary(ary);
    find_number(ary);

    return 0;
}

void print_ary(int *ary)
{
    int i;
    srand((unsigned int)time(NULL));

    printf("num[] = ");
    for (i = 0; i < 10; i++)
    {
        ary[i] = rand() % 10;
        printf("%d ", ary[i]);
    }
    printf("\n");
}

void find_number(int *ary)
{
    int max, min, i;

    max = min = ary[0];
    for (i = 1; i < 10; i++)
    {
        if (max < ary[i])
            max = ary[i];
        if (min > ary[i])
            min = ary[i];
    }

    printf("max = %d, min = %d\n", max, min);
}