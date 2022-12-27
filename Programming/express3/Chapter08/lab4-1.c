// 섭씨 온도를 화씨 온도로, 또 그 반대로 변환하는 프로그램 작성
#include <stdio.h>

void print_option(void);
double C2F(double c_temp);
double F2C(double f_temp);

int main(void)
{   
    char choice;
    double temp;
    while (1)
    {
        print_option();
        printf("메뉴에서 선택하세요.");
        choice = getchar();
        if (choice == 'q') break;
        else if (choice == 'c')
        {
            printf("섭씨온도 : ");
            scanf("%lf", &temp);
            printf("화씨온도 : %lf\n", C2F(temp));
        }
        else if (choice == 'f')
        {
            printf("화씨온도 : ");
            scanf("%lf", &temp);
            printf("섭씨온도 : %lf\n", F2C(temp));
        }
        getchar();
    }
    return 0;
}

void print_option(void)
{
    printf("'c' 섭씨온도에서 화씨 온도로 변환\n");
    printf("'f' 화씨온도에서 섭씨 온도로 변환\n");
    printf("'q' 종료\n");
}

double C2F(double c_temp)
{   
    return (9.0 / 5.0) * c_temp + 32;
}

double F2C(double f_temp)
{
    return (f_temp - 32.0) * (5.0 / 9.0);
}
// 책에서는 메인에서 scanf로 온도를 받는 경우로 했음