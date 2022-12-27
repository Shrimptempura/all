#include <stdio.h>

enum days {SUN, MON, TUE, WED, THU, FRI, SAT};      // days라는 열거형 정의, 첫번째
char *days_name[] = {                               // 식별자 값 0, 다음 1..
    "sumday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
    // 문자형 포인터 배열을 이용하여 문자열 배열 구현, 이런 방식으로 문자열이 포함된
    // 배열을 만들면 메모리의 낭비가 없다. 여기서 문자열 상수는 메모리에 저장된 후에
    // 시작 주소를 반환한다. 이 시작 주소로 문자형 포인터들이 설정된다.

int main(void)
{
    enum days d;    // d는 열거형이므로, d는 미리 열거된 값들 중 하나만 가질수 있다.
                    // 즉 MON ~ SUN까지의 값만 가질수 있다.
    d = WED;
    printf("%d번째 요일은 %s입니다.\n", d, days_name[d]);

    return 0;
}