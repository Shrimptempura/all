// 구조체 멤버와 선언 방식이 비슷하지만, 열거형은 변수에 저장할 수 있는 정수 값을 기호로
// 정의 하여 나열한다.      열거형을 사용한 프로그램
#include <stdio.h>

enum season {SPRING, SUMMER, FALL, WINTER};     // 열거형 선언

int main(void)
{
    enum season ss;         // 열거형 변수 선언
    char *pc = NULL;        // 문자열을 저장할 포인터

    ss = SPRING;            // 열거 멤버의 값 대입
    switch (ss)             // 열거 멤버 판단
    {
        case SPRING:
            pc = "inline"; break;
        case SUMMER:
            pc = "swimming"; break;
        case FALL:
            pc = "trip"; break;
        case WINTER:
            pc = "skiing"; break;
    }
    printf("나의 레저 활동 =>  %s\n", pc);

    return 0;
}
/*
5행 열거형 선언, 예약어 enum과 열거형 이름 짓고(season) 괄호 안에 멤버를 콤마로 나열
컴파일러는 멤버를 0부터 차례로 하나씩 큰 정수로 바꾼다.
즉 SPRING은 0, SUMMER는 1, FALL은 2, WINTER는 3이 된다. 초기값은 원하는 값으로 다시 설정 가능
ex) enum season {SPRING = 5, SUMMER, FALL = 10, WINTER};
이때 하나씩 큰 정수로 바뀜으로 SUMMER는 6, WINTER는 11이 된다.

9행(enum seaason ss;)에 선언된 열거형 변수는 int형과 같은 크기로 정수를 저장할 수 있는 공간이 할당되며
이후에는 12행(ss = SPRING;)과 같이 열거형 멤버를 저장하는 용도로 쓰인다.

결국 열거형 멤버는 정수로 바뀌므로 17-11은 사실상 정수 상수를 써서 작성할 수 있다.
<그러나> 열거형을 정의하면 계절 이름을 직접 사용할 수 있으므로 훨씬 가독성이 좋다.
*/