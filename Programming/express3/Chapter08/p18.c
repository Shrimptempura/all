// 사용자로부터 2개의 숫자를 받아서 덧셈, 뺄셈, 곱셈, 나눗셈, 나머지 연산의 결과를
// 계산해주는 프로그램 만들자, 함수를 최대한 많이 많들어 써보자
#include <stdio.h>

void menu_out(void);
int m_add(int x, int y);
int m_sub(int x, int y);
int m_mul(int x, int y);
int m_div(int x, int y);
int m_rem(int x, int y);

int main(void)
{
    int num, x, y;
    char retry;
    
    do
    {
        menu_out();
        scanf("%d", &num);
        printf("숫자 2개를 입력하시오 : ");
        scanf("%d %d", &x, &y);
        
        switch (num)
        {
            case 1: printf("연산결과 : %d\n", m_add(x, y)); break;
            case 2: printf("연산결과 : %d\n", m_sub(x, y)); break;
            case 3: printf("연산결과 : %d\n", m_mul(x, y)); break;
            case 4: printf("연산결과 : %d\n", m_div(x, y)); break;
            case 5: printf("연산결과 : %d\n", m_rem(x, y)); break;
        }

        printf("계속하려면 y를 누르시오 : ");
        retry = getchar();
        getchar();
    } while (retry == y);

    return 0;
}

int m_rem(int x, int y)
{
    return x % y;
}

int m_div(int x, int y)
{
    return x / y;
}

int m_mul(int x, int y)
{
    return x * y;
}

int m_sub(int x, int y)
{
    return x - y;
}

int m_add(int x, int y)
{
    return x + y;
}

void menu_out(void)
{
    printf("==========================\n");
    printf("MENU\n");
    printf("==========================\n");
    printf("1. 덧셈\n");
    printf("2. 뺄셈\n");
    printf("3. 곱셈\n");
    printf("4. 나눗셈\n");
    printf("5. 나머지\n");
    printf("원하는 메뉴를 선택하시오(1 - 5) : \n");
}