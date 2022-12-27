#pragma once
typedef struct rect {
    int x, y, w, h;
} RECT;

// 함수원형 정의, 구조체의 주소를 받는다. 구조체를 전달하는 것보다 효율적
void draw_rect(const RECT *);       
double calc_area(const RECT *);
void move_rect(RECT *, int, int);