#include <stdio.h>
#include "rect.h"
#define DEBUG

void draw_rect(const RECT *r)
{
#ifdef DEBUG    // 사각형 정보, 사각형을 가리키는 포인터를 매개변수로 받는다.
                // 포인터를 통하여 사각형 정보를 변경하지 않음으로 const를 앞에 붙임
    printf("draw_area(x = %d, y = %d, w = %d, h = %d)\n", 
        r -> x, r -> y, r -> w, r -> h);
#endif
}

double calc_area(const RECT *r)
{   // 사각형 면적 계산 반환, 사각형을 가리키는 포인터를 매개변수로 받는다.
    // 포인터를 통하여 사각형 정보를 변경하지 않음으로 const를 앞에 붙임
    double area;
    area = r -> w * r -> h;
#ifdef DEBUG
    printf("calc_area() = %f\n", area);
#endif
    return area;
}

void move_rect(RECT *r, int dx, int dy)
{   // 사각형의 원점을 이동, 사각형의 정보를 변경해야 하므로 const를 붙이면 안된다.
#ifdef DEBUG
    printf("move_rect(%d %d)\n", dx, dy);
#endif
    r -> x += dx;
    r -> y += dy;
}