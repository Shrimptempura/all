// 섭씨 온도를 화씨 온도로, 또 그 반대로 변환하는 프로그램 작성
#include <stdio.h>

void print_option(void);
double C2F();
double F2C();

int main(void)
{
    char ch;

    while(1)
    {   
        print_option();
        printf("메뉴에서 선택하세요.\n");
        ch = getchar();
        if (ch == 'c')
        {
            C2F();
        }
        else if (ch == 'f')
        {
            F2C();
        }
        else if (ch == 'q')
        {
            break;
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

double C2F()
{   
    double Ctem, Ftem;
    printf("섭씨온도 : ");
    scanf("%lf", &Ctem);

    Ftem = (9.0 / 5.0) * Ctem + 32;
    printf("화씨온도 : %lf\n", Ftem);

    return 0;
}

double F2C()
{
    double Ftem, Ctem;
    printf("화씨온도 : ");
    scanf("%lf", &Ftem);

    Ctem = (Ftem - 32.0) * (5.0 / 9.0);
    printf("섭씨 온도 : %lf\n", Ctem);

    return 0;
}