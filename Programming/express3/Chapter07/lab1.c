// 최대공약수 찾기(while)
#include <stdio.h>

int main(void)
{
    int x, y, r;

    printf("두개의 정수를 입력하시오(큰수, 작은수): ");
    scanf("%d%d", &x, &y);

    while (y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    printf("최대 공약수는 %d입니다.\n", x);

    return 0;
}
/* 최대공약수 유클리드 알고리즘
1) 두 수 가운데 큰 수를 x, 작은 수를 y라 한다.
2) y가 0이면 최대 공약수는 x와 같고 알고리즘을 종료한다.
3) r <- x % y
4) x <- y
5) y <- r
6) 단계 2로 되돌아간다.
*/