// #if, #ifdef, #else, #endif를 사용한 조건부 컴파일
#include <stdio.h>
#define VER 7       // 치환될 부분이 있는 매크로명 정의
#define BIT16       // 치환될 부분이 없는 매크로명 정의

int main(void)
{
    int max;

#if VER >= 6        // 매크로명 VER 6 이상이면
    printf("버전 %d입니다.\n", VER);    // 이 문장 컴파일
#endif          // #if

#ifdef BIT16        // 매크로명 BIT16이 정의되어 있으면
    max = 32767;    // 이 문장 컴파일
#else               // BIT16이 정의되어 있지 않으면
    max = 2147483646;   // 이 문장 컴파일
#endif              // #ifdef의 끝

    printf("int형 변수의 최대값 : %d\n", max);  

    return 0;
}
/*
(#if ~ #endif형식)                                  (#if ~ #else ~ #endif)
    #if 조건식                                          #if 조건식
        컴파일할 문장                                       컴파일할 문장1
    #endif                                              #else
// 두 문장이라도 중괄호를 쓰지 않는다.                      컴파일할 문장2
                                                        #endif

(#if ~ #elif ~ #else ~ #endif 형식)
    #if 조건식1
        컴파일할 문장1
    #elif 조건식2
        컴파일할 문장2
    #else
        컴파일할 문장3
    #endif

조건식에 특정 매크로명이 정의되어 있는지 검사할 때는 전처리 연산자 defined를 사용합니다.
예로 들어 BIT16 매크로명이 정의되어 있는지 확인하여 컴파일한다면 다음과 같이 작성한다.
이때 #if와 #defined를 묶어 14행처럼 #ifdef로 쓸 수 있다.

#if defined BIT16               #ifdef BIT16
    컴파일할 문장       -->         컴파일할 문장
#endif                          #endif

#undef BIT16        // BIT16 매크로명의 정의 취소

매크로명이 정의되지 않은 경우를 확인할때는 !defined 연산자나 #ifndef를 쓴다.
#if !defined BIT16              #ifndef BIT16
    컴파일할 문장       -->         컴파일할 문장
#endif                          #endif

결국 #ifdef와 #if defined 그리고 #ifndef와 #if !defined의 용도는 같다.
<그러나> #ifdef와 #ifndef는 매크로명의 정의 여부만 확인할 수 있으므로 다른 연산자와 함께
조건식을 만들때는 defined나 !defined 연산자를 사용해야 한다.
    #if (defined(BIT16) && (VER >= 6))      // BIT16 매크로가 정의되어 있고 VER가 6이상일시
        컴파일할 문장
    #endif

조건을 만족하지 않는 경우 컴파일 자체를 중단할 때는 #error 지시자를 사용한다.
예를 들어 9행 조건식 VER >= 6을 만족하지 않는 경우 컴파일 자체를 끝내고 싶다면..
#if VER >= 6                                // 매크로명 VER이 6이상이면
    printf("버전 %d입니다.\n", VER);        // 이 문장 컴파일
#else                                       // 그렇지 않으면
#error 컴파일러 버전은 6.0 이상이어야 합니다.   // 메시지를 보여주고 컴파일 종료
#endif                                      // #if의 끝

조건부 컴파일은 프로그램의 호환성을 좋게 합니다. C 언어의 기본 문법은 같지만
컴파일러와 운영체제에 따라 자료형의 크기나 지원되는 라이브러리 함수가 다를 수 있다.
<따라서> 조건부 컴파일 기능을 사용하여 컴파일할 코드를 구별하면 서로 다른 컴파일러에서
컴파일이 가능한 코드를 만들수 있다.
*/