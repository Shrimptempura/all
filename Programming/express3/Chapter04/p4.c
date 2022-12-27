// 상자의 부피 구하기, 부피는 길이 * 너비 * 높이, 모두 double형 실수로 입력받자
#include <stdio.h>

int main(void)
{
    double line;        // 길이
    double width;       // 너비
    double height;      // 높이
    double vol;         // 부피

    printf("상자의 가로 세로 높이를 한번에 입력 : ");
    scanf("%lf%lf%lf", &line, &width, & height);

    vol = line * width * height;

    printf("상자의 부피는 %lf입니다.\n", vol);

    return 0;
}