// 2차원 평면에서 점은 (x, y)좌표이다. 따라서 하나의 점은 point 구조체로 정의할 수 있다.
// 이 point 구조체를 받아서 두 점의 좌표가 일치하면 1을 반환하고, 그렇지 않으면 0을
// 반환하는 함수 int equal(struct point p1, struct point p2)를 작성 및 테스트
#include <stdio.h>

struct point {
    int x;
    int y;
};

int equal(struct point p1, struct point p2);

int main(void)
{
    struct point p1, p2;
    printf("p1의 x, y 좌표 : ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("p2의 x, y 좌표 : ");
    scanf("%d %d", &p2.x, &p2.y);
    
    if (equal(p1, p2) == 1)
        printf("두 점의 좌표가 일치 합니다.\n");
    else
        printf("두 점의 좌표가 일치하지 않습니다.\n");
}

int equal(struct point p1, struct point p2)
{
    if ((p1.x == p2.x) && (p1.y == p2.y))
        return 1;
    else
        return 0;
}