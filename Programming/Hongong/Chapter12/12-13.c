// strcpy 함수는 포인터를 써서 문자열을 복사합니다. strcpy 함수는 문자열이 저장된
// 메모리에서 첫 번째 문자의 인수를 받습니다.

// strcpy와 기능이 같은 함수의 구현
#include <stdio.h>

char *my_strcpy(char *pd, char *ps);    // 함수 선언

int main(void)
{
    char str[80] = "strawberry";

    printf("바꾸기 전 문자열 : %s\n", str);
    my_strcpy(str, "apple");        // 문자열 "apple" 복사
    printf("바꾼 후 문자열 : %s\n", str);
    printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));

    return 0;
}

char *my_strcpy(char *pd, char *ps)     // 복사 받을 곳(pd)과 복사할 곳 (ps)의 포인터
{
    char *po = pd;      // pd 값을 나중에 반환하기 위해 보관

    while (*ps != '\0') // ps가 가리키는 문자가 널 문자가 아닐 동안(복사하는 문자열이)
    {
        *pd = *ps;      // ps가 가리키는 문자를 pd가 가리키는 위치에 대입
        pd++;           // 복사 받을 다음 위치로 포인터 증가
        ps++;           // 복사할 다음 문자의 위치로 포인터 증가
    }
    *pd = '\0';         // 복사가 모두 끝난 후 복사 받을 곳에 널 문자로 마무리

    return po;          // 복사가 끝난 저장 공간의 시작 주소 반환
}
// ps가 가리키는 문자가 널이 되어 반복을 종료하면; while (*ps != '\0')
// 널 문자는 저장되지 않으므로 반복을 종료한 훌에 31행처럼 pd가 가리키는 곳에
// 반드시 널 문자를 저장해야 한다. 