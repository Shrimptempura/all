// scanf()의 반환값 이용
#include <stdio.h>

int main(void)
{
    int x, y, z;

    if (scanf("%d%d%d", &x, &y, &z) == 3)
        printf("정수들의 합은 %d\n", x + y + z);
    else
        printf("입력값이 올바르지 않습니다.\n");

    return 0;
}

// scanf()가 반환하는 값은 읽은 항목의 개수이다. 따라서 이것을 이용하면 사용자가
// 값을 몇개나 성공적으로 입력하였는지 검사할 수 있다.