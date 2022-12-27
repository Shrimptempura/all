// 직사각형의 둘레와 면적을 구하는 프로그램 작성해보자, 직사각형 가로와 세로는 각각
// w와 h라고 하면 직사각형 면적은 w * h, 둘레는 2 * (w + h)가 된다.
#include <stdio.h>

int main(void)
{
    double w, h;
    double area;
    double perimeter;

    printf("직사각형의 가로와 세로를 입력하시오 : ");
    scanf("%lf %lf", &w, &h);

    area = w * h;
    perimeter = 2 * (w + h);

    printf("사각형의 넓이 : %.2lf\n", area);
    printf("사각형의 둘레 : %.2lf\n", perimeter);

    return 0;
}