// 2차원 공간 상의 점을 POINT 타입으로 정의하기
// 2차원 공간에서의 점을 구조체로 표현한 다음에 이 구조체를 typedef을 이용하여
// 새로운 타입인 POINT로 정의한다. translate() 함수의 인수로 원래의 점의 좌표와 이동된
// 거리를 전달하여서 점의 평행이동 계산을 한다.
#include <stdio.h>

typedef struct point {      // 구조체 point를 정의하면서 동시에 struct point를 새로운
    int x;                  // 자료형인 POINT를 정의한다. typedef이 함수의 외부에서
    int y;                  // 이루어졌으므로 현재 소스 파일의 모든 함수가 이 정의를 사용
} POINT;                    // 가능하다.

POINT translate(POINT p, POINT delta);

int main(void)
{
    POINT p = {2, 3};       // 새로 정의된 POINT를 이용하여 필요한 변수들을 생성한다.
    POINT delta = {10, 10}; 
    POINT result;

    result = translate(p, delta);   // p를 delta만큼 평행이동하기 위하여 translate()를
    // 호출한다. p와 delta가 함수의 인수로 주어지고 이들은 구조체이므로 모두 매개변수로
    // 복사된다.

    printf("새로운 점의 좌표는 (%d, %d)입니다.\n", result.x, result.y);

    return 0;
}

POINT translate(POINT p, POINT delta)
{
    POINT new_p;    // 구조체 p에 delta를 더하여 새로운 점의 좌표인 new_p를 계산한다.
                    // 구조체끼리는 더할 수 없으므로 구조체의 멤버별로 따로 덧셈해준다.

    new_p.x = p.x + delta.x;
    new_p.y = p.y + delta.y;

    return new_p;   // 결과를 저장하고 있는 구조체인 result를 반환한다.
                    // 이 구조체도 마찬가지로 복사본이 main()으로 전달된다.
}