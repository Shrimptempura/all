#include <stdio.h>

void print_char(char ch, int count);        // 함수 선언

int main(void)
{
    print_char('@', 5);                     // 문자와 숫자를 주고 함수 호출
                                            // p_char의 반환값이 없으므로 10과 더할수 없다.
    return 0;
}

void print_char(char ch, int count)         // 매개변수는 있으나 반환형은 없다.(문자와 숫자를 받아야 함으로)
{
    int i;
    for (i = 0; i < count; i++)
    {
        printf("%c", ch);                   // 매개변수 ch에 받은 문자 출력
    }
    return;                     // 반환값이 없으므로 return문 단독 사용
}