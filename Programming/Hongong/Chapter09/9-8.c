// 포인터 없이 두 변수의 값을 바꾸는 함수; 다른 함수의 변수 사용하기
#include <stdio.h>

void swap(void);        // 두 변수의 값을 바꾸는 함수 선언

int main(void)
{
    int a = 10, b = 20;

    swap();                         // 인수 없이 함수 호출
    printf("a:%d, b:%d\n", a, b);   // 변수 a, b 출력

    return 0;
}

void swap(void)     // 인수가 없음으로 매개변수도 없음
{
    int temp;       // 교환을 위한 변수

    temp = a;
    a = b;
    b = temp;
}

// 컴파일 오류가 난다. 함수 안의 변수명은 사용 범위가 함수 내부로 제한
// main함수의 변수 a, b는 다른 함수인 swap 함수에서 그 이름을 사용할 수 없다.