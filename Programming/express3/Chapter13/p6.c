// 5범 문제의 equal() 함수를 다음과 같이 구조체 포인터를 받도록 작성 및 테스트
#include <stdio.h>

struct point {
    int x;
    int y;
};

int equal(struct point *p1, struct point *p2);

int main(void)
{
    struct point p1, p2;

    printf("p1의 x, y 좌표 : ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("p2의 x, y 좌표 : ");
    scanf("%d %d", &p2.x, &p2.y);
    
    if (equal(&p1, &p2) == 1)
        printf("두 점의 좌표가 일치 합니다.\n");
    else
        printf("두 점의 좌표가 일치하지 않습니다.\n");
}

int equal(struct point *p1, struct point *p2)
{
    if ((p1 -> x == p2 -> x) && (p1 -> y == p2 -> y))
        return 1;
    else
        return 0;
}