// 원의 중심을 나타내는 point 구조체, 원을 나타내는 circle 구조체 정의 및 작성 테스트
#include <stdio.h>

struct point {
    int x, y;
};

struct circle {
    struct point center;
    double radius;
};

double area (struct circle c);
double perimeter(struct circle c);

int main(void)
{
    struct circle c;

    printf("원의 중심점 : ");
    scanf("%d %d", &c.center.x, &c.center.y);

    printf("원의 반지름 : ");
    scanf("%lf", &c.radius);

    printf("원의 면적 = %lf\n", area(c));
    printf("원의 둘레 = %lf\n", perimeter(c));

    return 0;
}

double area (struct circle c)
{
    return c.radius * c.radius * 3.14;
}

double perimeter(struct circle c)
{
    return 2 * 3.14 * c.radius;
}