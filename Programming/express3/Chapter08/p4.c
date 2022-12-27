// 윤년을 구하는 함수(is_leap(int year)), 이 함수 사용하여 윤년확인 프로그램
#include <stdio.h>

int is_leap(int year);

int main(void)
{
    int year, res;

    printf("연도를 입력하시오 : ");
    scanf("%d", &year);

    res = is_leap(year);
    printf("%d는 %d입니다.\n", year, res);

    return 0;
}

int is_leap(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0)
        return 366;
    else
        return 365;
}