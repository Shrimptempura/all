// max함수 만들기
#include <stdio.h>

int max(int x, int y);

int main(void)
{
    int x, y;
    printf("정수 2개를 입력하시오 : ");
    scanf("%d %d", &x, &y);
    max(x, y);

    return 0;
}

int max(int x, int y)
{
    if (x > y)
        return printf("더 큰 값은 %d입니다.\n", x);
    else
        return printf("더 큰 값은 %d입니다.\n", y);
}
// 사실 max함수의 의미대로 큰 값만 가져오는게 맞다. pf를 치는게 아니라.