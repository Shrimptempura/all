// goto 써보자, 구구단
#include <stdio.h>

int main(void)
{
    int i = 1;

    loop:   // loop라는 이름의 레이블을 현 위치에 정의한다.
        printf("%d * %d = %d\n", 3, i, 3 * i);
        i++;
        if (i == 10) goto end;      // i가 10이 되면 레이블 end로 점프한다.
        goto loop;

    end:
        return 0;
}
// 보통 while이나 for가 더 쉽고 간결하나 가끔 goto가 유용하다.