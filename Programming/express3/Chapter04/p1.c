#include <stdio.h>

int main(void)
{
    double fl;

    printf("실수를 입력하시오 : ");
    scanf("%lf", &fl);

    printf("실수형식으로는 %lf입니다.\n", fl);
    printf("지수형식으로는 %e입니다.\n", fl);

    return 0;
}