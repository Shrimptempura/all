// 키보드에 입력된 문자를 검사하여 소문자이면 대문자로 변환 프로그램 예제
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (islower(c))
        {
            c = toupper(c);     // islower()를 사용해 소문자인지 검사하고, 소문자이면
                                // toupper()를 이용하여 대문자로 변환
        }
        putchar(c);     // 변환된 문자는 putchar()를 이용하여 화면에 출력한다.
    }

    return 0;
}