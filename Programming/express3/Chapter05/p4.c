// cm으로 표현된 키를 입력하여 피트와 인치 변환 프로그램, 1피트 = 12인치, 1인치 = 2.54cm
#include <stdio.h>

int main(void)
{
    int cm, feet;
    double inch;

    printf("키를 입력하세요 : ");
    scanf("%d", &cm);

    inch = cm / 2.54;
    feet = inch / 12;
    inch = inch - feet * 12.;

    printf("%dcm는 %d피트 %lf인치 입니다.\n", cm, feet, inch);
    
    return 0;
}   