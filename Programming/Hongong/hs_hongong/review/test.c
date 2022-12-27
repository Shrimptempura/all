#include <stdio.h>

int main(void)
{
    int hour;
    int min;
    int second;
    int time;

    printf("초를 입력하시오 : ");
    scanf("%d", &time);

    hour = time / 3600;
    min = (time % 3600) / 60;
    second = (time % 3600) % 60;

    printf("%d초는 %d시간 %d분 %d초 입니다.\n", time, hour, min, second);
    
    return 0;
}