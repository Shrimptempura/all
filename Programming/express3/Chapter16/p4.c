// 사용자로부터 반지름과 높이를 받아서 원기둥의 부피를 구하는 프로그램 작성
// 파이는 단순 매크로 정의, 원기둥 부피 구하는 공식은 함수 매크로 정의
#include <stdio.h>
#define PI 3.141592
#define VOLUME(r, h) ((PI) * (r) * (r) * (h))

int main(void)
{
    int r, h;
    double volume;

    printf("원기둥의 반지름을 입력하시오 : ");
    scanf("%d", &r);

    printf("원기둥의 높이를 입력하시오 : ");
    scanf("%d", &h);

    volume = VOLUME(r, h);
    printf("원기둥의 부피 : %lf\n", volume);

    return 0;
}