// 2차원 공간에 있는 점의 좌표를 받아서 이 점이 속하는 사분면의 번호를 반환하는 함수
// int quadrant(struct point p);를 작성 및 테스트, 앞의 point 구조체 사용
#include <stdio.h>

struct point {
    int x;
    int y;
};

int quadrant(struct point p);

int main(void)
{
    struct point p;

    printf("p의 좌표를 입력하시오 : ");
    scanf("%d %d", &p.x, &p.y);

    printf("p의 좌표는 %d 사분면 입니다.\n", quadrant(p));

    return 0;
}

int quadrant(struct point p)
{
    if ((p.x > 0) && (p.y > 0))
        return 1;
    else if ((p.x < 0) && (p.y > 0))
        return 2;
    else if ((p.x < 0) && (p.y < 0))
        return 3;
    else
        return 4;
}