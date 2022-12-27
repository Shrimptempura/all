// 숫자맞추기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int answer, choose, cnt = 0;

    srand((unsigned)time);
    answer = rand() % 100 + 1;
    
    do
    {
        printf("답을 맞춰보세요 : ");
        scanf("%d", &choose);

        if (answer > choose)
            printf("정답이 더 큽니다.\n");
        if (answer < choose)
            printf("정답이 더 작습니다.\n");
        cnt++;
    } while(answer != choose);

    printf("축하합니다. 시도횟수 = %d\n", cnt);

    return 0;
}