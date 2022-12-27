// 연도가 4로 나누어 떨어진다. 100으로 나누어 떨어지는 연도는 제외한다.
// 400으로 나누어 떨어지는 연도는 윤년이다.
#include <stdio.h>

int main(void)
{
    int year, res;

    printf("연도를 입력하시오 : ");
    scanf("%d", &year);

    year = (year % 2 == 0);

    //res = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 1);
    printf("result = %d\n", year);

    return 0;
}