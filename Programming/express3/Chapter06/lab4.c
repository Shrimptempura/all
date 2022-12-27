// 1년의 달의 일수를 출력하는 프로그램 작성
#include <stdio.h>

int main(void)
{
    int month, day;

    printf("달을 입력하시오 : ");
    scanf("%d", &month);

    switch (month)
    {
        case 1: printf("1월의 일수는 31일 입니다.\n"); break;
        case 2: printf("2월의 일수는 28일 입니다.\n"); break;
        case 3: printf("3월의 일수는 31일 입니다.\n"); break;
        case 4: printf("4월의 일수는 30일 입니다.\n"); break;
        case 5: printf("5월의 일수는 31일 입니다.\n"); break;
        case 6: printf("6월의 일수는 30일 입니다.\n"); break;
        case 7: printf("7월의 일수는 31일 입니다.\n"); break;
        case 8: printf("8월의 일수는 31일 입니다.\n"); break;
        case 9: printf("9월의 일수는 30일 입니다.\n"); break;
        case 10: printf("10월의 일수는 31일 입니다.\n"); break;
        case 11: printf("11월의 일수는 30일 입니다.\n"); break;
        case 12: printf("12월의 일수는 31일 입니다.\n"); break;
        default: printf("잘못된 달을 입력하셨습니다.\n"); break;
    }

    return 0;
}