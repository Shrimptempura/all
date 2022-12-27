// 구조체를 가리키는 포인터
#include <stdio.h>

struct student s = {24, "kim", 4.3};
struct student *p;      // 구조체 student를 가리키는 포인터 선언

p = &s;     // 구조체의 주소를 포인터에 대입
printf("학번 = %d 이름 = %s 학점 = %f\n", (*p).number, (*p).name, (*p).grade);
            // 포인터를 통하여 구조체의 정보에 접근한다. (*p)가 구조체가 된다.

    포인터를 이용하여 구조체의 멤버를 액세스하려면 위와 같이 (*p).number와 같이 하면된다.
    *p가 구조체를 가리키고 여기에 마침표 기호를 붙이면 멤버가 되는 것이다.

    포인터를 이용하여 구조체의 멤버를 가리키는 것은 ' -> ' 연산자가 있다.
    '->' 연산자는 간접 멤버 연산자(indirect membership operator)로 불리며
    구조체 포인터를 이용하여 멤버에 접근하기 위하여 사용된다.

    p -> number; ______ (*p).number와 같다
    보통 '->' 표시를 더 많이 사용한다. p -> number는 포인터 p가 가리키는 구조체의 멤버
    number라는 의미이다.

    고로 8행은 요렇게 쓸수있다.
    printf("학번 = %d 이름 = %s 학점 = %f\n", p -> number, p -> name, p -> grade);

1) (*p).number
    포인터 p가 가리키는 구조체의 멤버 number
2) p -> number
    포인터 p가 가리키는 구조체의 멤버 number를 의미하며 (*p).number와 완전히 동일
3) *p.number
    연산자 우선순위에 의하여 *(p.number)와 같다. 구조체 p의 멤버 number가 가리키는 것이란
    의미이다. 이때 number는 반드시 포인터여야 한다. number가 포인터가 아니면 오류이다.
4) *p -> number
    연산자의 우선순위에 의하여 *(p -> number)와 같다. p가 가리키는 구조체의 멤버 number가
    가리키는 내용을 의미한다. 만약 number가 포인터가 아니면 오류이다.