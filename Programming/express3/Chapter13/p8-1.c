// 원의 중심을 나타내는 point 구조체, 원을 나타내는 circle 구조체 정의 및 작성 테스트
#include <stdio.h>

struct point {
    int x;
    int y;
};

typedef struct circle {
    struct point center;
    double radius;
} CIRCLE;

CIRCLE area (CIRCLE c);
CIRCLE perimeter(CIRCLE c);

int main(void)
{
    CIRCLE c;
    CIRCLE result;

    printf("원의 중심점 : ");
    scanf("%d %d", &c.center.x, &c.center.y);

    printf("원의 반지름 : ");
    scanf("%lf", &c.radius);

    result = area(c);
    printf("원의 면적  = %lf\n", result.radius);

    result = perimeter(c);
    printf("원의 둘레 = %lf\n", result.radius);

    return 0;
}

CIRCLE area (CIRCLE c)
{
    CIRCLE area_p;
    area_p.radius = c.radius * c.radius * 3.14;

    return area_p;
}

CIRCLE perimeter(CIRCLE c)
{
    CIRCLE perimeter_p;
    perimeter_p.radius = 2 * 3.14 * c.radius;

    return perimeter_p;
}