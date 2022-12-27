#include <stdio.h>

int main(void)
{
    double light_speed = 300000;
    double distance = 149600000;
    double reach_time;

    reach_time = distance / light_speed;

    printf("빛의 속도는 %lfkm/s\n", light_speed);
    printf("태양과 지구와의 거리 : %lfkm\n", distance);
    printf("도달 시간은 %lf초\n", reach_time);

    return 0;
}