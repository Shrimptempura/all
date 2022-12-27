// 포인터의 선언과 사용
#include <stdio.h>

int main(void)
{
    int a;      // 일반 변수 선언
    int *pa;    // 포인터 선언

    pa = &a;    // 포인터에 a의 주소 대입
    *pa = 10;   // 포인터로 변수 a에 10 대입

    printf("포인터로 a 값 출력 : %d\n", *pa);
    printf("변수명으로 a 값 출력 : %d\n", a);

    return 0;
}

// 포인터 선언;  자료형 *변수명;  ex) int *pa;    int:주소 위치에 있는 변수의 자료형, 
// *pa 포인터 선언시 변수명 앞에 *붙임

/*
scanf("%d", &a);
scanf("%d", &*pa);  포인터 pa값은 &a
*/