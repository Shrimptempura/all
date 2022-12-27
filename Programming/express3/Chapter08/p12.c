// 화면에 세로로 막대 그래프 그리는 프로그램 작성, 인수의 값 만큼 별표 문자 출력하는
// 함수 print_value(int n)을 작성해라, 반복적으로 사용자로부터 값을 입력받아서 
// print_value()를 호출하여 입력값 만큼 막대를 그리는 프로그램 완성, 음수입력시 반복중단
#include <stdio.h>

void print_value(int n);

int main(void)
{   
    int num;

    while (1)
    {
        printf("값을 입력하시오(종료는 음수) : ");
        scanf("%d", &num);

        if (num < 0)
            break;

        print_value(num);
    }

    return 0;
}

void print_value(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
}