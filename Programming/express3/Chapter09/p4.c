// 정적 변수는 초기화를 딱 한번만 수행하는 경우에도 사용된다. 난수를 생성하여 반환하는
// 함수 get_random()을 작성하여 테스하라, get_random()이 처음으로 호출되는 경우에는
// srand()를 호출하여 난수의 시드를 초기화하고, 그렇지 않으면 단순히 rand()를 호출하여
// 난수를 반환해라
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_random(void);

static int intied = 0;

int main(void)
{
    char ch;

    printf("초기화 실행\n");

    while ((ch = getchar()) == '\n')
    {
        if (intied == 0)
            get_random();
        else
            printf("%d\n", rand());
    }

    return 0;
}

void get_random(void)
{
    srand((unsigned)time(NULL));
    intied++;
}