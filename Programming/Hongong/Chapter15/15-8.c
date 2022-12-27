// 함수 포인터로 원하는 함수를 호출하는 프로그램
#include <stdio.h>

void func(int (*fp)(int, int));     // 함수 포인터를 매개변수로 갖는 함수
int sum(int a, int b);              
int mul(int a, int b);
int max(int a, int b);

int main(void)
{
    int sel;        // 선택된 메뉴 번호를 저장할 변수

    printf("01 두 정수의 합\n");
    printf("02 두 정수의 곱\n");
    printf("03 두 정수 중에서 큰 값 계산\n");
    printf("원하는 연산을 선택하세요 : ");
    scanf("%d", &sel);      // 메뉴 번호 입력

    switch(sel)
    {
        case 1: func(sum); break;
        case 2: func(mul); break;
        case 3: func(max); break;
    }

    return 0;
}

void func(int (*fp)(int, int))
{
    int a, b;   // 두 정수를 저장할 변수
    int res;    // 함수의 반환값을 저장할 변수

    printf("두 정수의 값을 입력하세요 : ");
    scanf("%d%d", &a, &b);      // 두 정수 입력
    res = fp(a, b);             // 함수 포인터로 가리키는 함수를 호출
    printf("결과값은 : %d\n", res);     // 반환값 출력
}

int sum(int a, int b)
{
    return (a + b);
}

int mul(int a, int b)
{
    return (a * b);
}

int max(int a, int b)
{
    if (a > b) return a;
    else return b;
}
/* 이 프로그램은 함수를 정의할 때  일부를 구현하지 않고 함수가 호출될 때 그 기능을
결정한다. 일단 29행에서 구현한 func 함수는 다음 기능을 수행한다.
1) 2개의 정수를 키보드로부터 입력한다.
2) 두 정수로 연산을 수행한다.
3) 연산 결과를 화면에 출력한다.

이 함수의 기능에서 1번과 3번은 변함이 없고, 2번의 연산 종류를 함수를 호출할 때 
결정하고 싶다면 매개변수에 함수 포인터를 선언합니다. 그리고 func 함수를 호출할 때는
원하는 기능의 함수를 인수로 주고 호출한다.

func(   );  <- 정수의 합 or 정수의 곱 계산 or 큰 값 계산

func 함수 안에서는 함수 포인터인 매개변수 fp가 함수명을 저장하여 해당 함수를
가리키므로 fp를 통해 해당 기능을 가진 함수를 호출할 수 있다.
void func(int (*fp)(int, int))
{
    ...
    res = fp(a, b);     // 입력한 두 정수를 주고 fp가 가리키는 함수 호출
    ...
}
*/