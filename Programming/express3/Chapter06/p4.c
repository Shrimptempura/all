// 컴퓨터와 가위바위보 게임을 해보자
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int rcp, chose;
    srand((unsigned)time(NULL));
    rcp = rand() % 3 + 1;

    printf("선택하시오(1: 가위, 2: 바위, 3: 보)");
    scanf("%d", &chose);

    if (rcp == 1)
    {
        if (chose == 1)
            printf("비겼습니다.\n");
        else if (chose == 2)
            printf("사용자가 이겼습니다.\n");
        else if (chose == 3)
            printf("사용자가 졌습니다.\n");
        else
            printf("잘못된 선택입니다.\n");
    }
    
    else if (rcp == 2)
    {
        if (chose == 1)
            printf("사용자가 졋습니다.\n");
        else if (chose == 2)
            printf("비겼습니다.\n");
        else if (chose == 3)
            printf("사용자가 이겼습니다.\n");
        else
            printf("잘못된 선택입니다.\n");
    }

    else if (rcp == 3)
    {
        if (chose == 1)
            printf("사용자가 이겻습니다.\n");
        else if (chose == 2)
            printf("사용자가 졌습니다.\n");
        else if (chose == 3)
            printf("비겼습니다.\n");
        else
            printf("잘못된 선택입니다.\n");
    }
    
    printf("컴퓨터가 선택한 것은 %d번 입니다.\n", rcp);
    
    return 0;
}