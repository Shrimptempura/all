// 함수 포인터의 배열, 함수 포인터도 함수의 주소가 들어 있는 변수이기 때문에 배열로
// 만들수 있다. 의외로 비교적 많이 사용된다. 예로 크기가 5인 함수 포인터 배열 선언
// int (*pf[5])(int, int);          fp2.c
#include <stdio.h>

void menu(void);
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

void menu(void)
{   
    printf("=====================\n");
    printf("0. 덧셈\n");
    printf("1. 뺄셈\n");
    printf("2. 곱셈\n");
    printf("3. 나눗셈\n");
    printf("4. 종료\n");
    printf("=====================\n");
}

int main(void)
{
    int choice, result, x, y;
    int (*pf[4])(int, int) = {add, sub, mul, div};
    // 함수 포인터 배열을 선언하고 초기화한다.
    while (1)
    {
        menu();
        printf("메뉴를 선택하시오 : ");
        scanf("%d", &choice);

        if (choice < 0 || choice >= 4)
            break;
        
        printf("2개의 정수를 입력하시오 : ");
        scanf("%d %d", &x, &y);

        result = pf[choice](x, y);      // 함수 포인터를 이용한 함수 호출

        printf("연산 결과 = %d\n", result);
    }

    return 0;
}

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int div(int x, int y)
{
    return x / y;
}