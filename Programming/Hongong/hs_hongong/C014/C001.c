#include <stdio.h>

struct point {
    int x, y;
};

struct circle {
    struct point center;
    double radius;
};

void circle_info(struct circle *cp);
double area(struct circle *cp);
double perimeter(struct circle *cp);

int main(void)
{
    struct circle cir = {{3, 4}, 10.0};

    circle_info(&cir);
    printf("원의 면적: %lf\n", area(&cir));
    printf("원의 둘레: %lf\n", perimeter(&cir));

    return 0;
}

void circle_info(struct circle *cp)
{
    printf("중심 좌표 : (%d, %d)\n", cp->center.x, cp->center.y);
    printf("반지름 : %lf\n", cp->radius);
}

double area(struct circle *cp)
{
    return 3.14 * cp->radius * cp->radius;
}

double perimeter(struct circle *cp)
{
    return 2 * 3.14 * cp->radius;
}