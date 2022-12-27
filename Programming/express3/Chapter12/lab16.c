// strchr.c     주어진 문자열에서 특정한 '문자'가 있는지 확인
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "language";
    char c = 'g';
    char *p;
    int loc;

    p = strchr(s, c);   // g는 s[]에서 4번째에서 처음 나타남. strchr()은 처음나타나는
                        // 'g'의 위치를 반환하므로... &s[3]이 함수의 반환값으로 반환됨
    loc = (int)(p - s);     // g의 위치를 주소를 가지고 계산한다. g의 주소에서
                            // s[]의 시작 주소를 뺀다.
    if (p != NULL)
        printf("%s에서 첫번째 %c가 %d에서 발견되었음\n", s, c, loc);
    else
        printf("%c가 발견되지 않았음.\n", c);

    return 0;
}