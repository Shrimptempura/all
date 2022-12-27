// auto 지역 변수와 static 지역 변수의 비교
#include <stdio.h>

void auto_func(void);       // auto_func 함수 선언
void static_func(void);     // static_func 함수 선언

int main(void)
{
    int i;

    printf("일반 지역 변수(auto)를 사용한 함수...\n");
    for (i = 0; i < 3; i++)
    {
        auto_func();
    }

    printf("정적 지역 변수(static)를 사용한 함수...\n");
    for (i = 0; i < 3; i++)
    {
        static_func();
    }

    return 0;
}

void auto_func(void)    // 지역변수는 함수가 호출될 때마다 메모리에 새롭게 할당하고
{                       // 그때마다 0으로 초기화한다. 함수의 호출 횟수와 상관없이
    auto int a = 0;     // 지역 변수 선언과 초기화              항상 '1' 출력된다

    a++;                // a 값 1 증가
    printf("%d\n", a);  // a 출력
}

void static_func(void)  // 정적 지역 변수는 프로그램이 실행될때 메모리가 할당되며
{                       // 프로그램이 끝날때까지 존재한다. 따로 초기화하지않으면 '0'
    static int a;       // 정적 지역 변수 선언              으로 자동 초기화
    
    a++;                // a 값 1 증가
    printf("%d\n", a);  // a 출력
}
/*
일반 지역 변수 사용       ==> 함수 호출시마다 메모리 새롭게 할당 초기화
정적 지역 변수 사용         ==> 함수가 반환되도 저장공간 계속유지, 프로그램 끝날때까지
*/