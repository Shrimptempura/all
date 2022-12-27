// 사용자로부터 삼각형의 높이와 밑변을 받아서 계산하여 출력하는 프로그램을 작성해라
// 단 모든 데이터는 실수로 입력되며 출력도 모두 실수형으로 하여야 한다.
#include <stdio.h>

int main(void)
{
    double height;
    double base;        // 밑변
    double area;

    printf("삼각형의 밑변 : ");
    scanf("%lf", &base);

    printf("삼각형의 높이 : ");
    scanf("%lf", &height);

    area = base * height * 0.5;

    printf("삼각형의 넓이 : %lf\n", area);

    return 0;
}