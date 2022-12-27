// 문자열은 주소다. 따라서 문자열도 char 포인터에 대입하여 사용가능
// 문자열을 char 포인터에 대입하면 문자열에 이름을 붙여 사용가능, 다른 문자열 쉽게 바꿈
// 포인터로 문자열을 사용하는 방법
#include <stdio.h>

int main(void)
{
    char *dessert = "apple";    // 포인터에 문자열 초기화
                                // 문자열은 컴파일 과정 별도 보관, 첫 번째 문자의 주소로
                                // 바뀜으로 결국 포인터에는 문자열 시작 위치 값만 저장
    printf("오늘 후식은 %s입니다.\n", dessert);     // 문자열 출력
    dessert = "banana";                             // 새로운 문자열 대입
    printf("내일 후식은 %s입니다.\n", dessert);     // 바뀐 문자열 출력

    return 0;
}
/*
while (*desser != '\0')     dessert가 가리키는 문자가 널 문자가 아닐 동안
{
    putchar(*dessert);      dessert가 가리키는 문자 출력
    dessert++;              dessert로 다음 문자를 가리킨다.
}
*/