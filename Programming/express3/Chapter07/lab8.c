// 초등학생용 수학문제(덧셈만) 10개 출제 프로그램 만들기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i, answer, x, y;
    srand((unsigned int)time(NULL));
    

    for (i = 0; i < 10; i++)
    {
        x = rand() % 10;
        y = rand() % 10;
        printf("%d + %d = ?\n", x, y);
        scanf("%d", &answer);

        if (x + y == answer)
            printf("정답입니다.\n");
        else
            printf("오답입니다.\n");
    }
    return 0;
}