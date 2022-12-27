// 포인터 없이 두 변수의 값을 바꾸는 함수2; 변수의 값을 인수로 주는 경우
#include <stdio.h>

void swap(int x, int y);    // 두 변수의 값을 바꾸는 함수 선언

int main(void)
{
    int a = 10, b = 20;

    swap(a, b);                     // a, b의 값을 복사해서 전달
    printf("a:%d, b:%d\n", a, b);   // 변수 a, b 출력

    return 0;
}

void swap(int x, int y)     // 인수 a, b의 값을 x, y에 복사해서 저장
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

// swap 함수에서 매개변수의 이름을 a, b로 사용해도 결과는 같다.
// 이름이 같아도 함수가 다르면 메모리에 별도의 저장 공간을 확보하므로 전혀 다른 변수로 사용된다.