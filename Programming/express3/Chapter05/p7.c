// 정수에 비트 연산자 <<를 한번 적용하면 2를 곱한 값을 얻을 수 있다. >>적용시 2로
// 나눈 값이다. 정수 x, y를 입력받아서 x << y 값 출력 프로그램만들자
#include <stdio.h>

int main(void)
{
    int x, y;

    printf("정수를 입력하시오 : ");
    scanf("%d", &x);

    printf("2를 곱하고 싶은 횟수 : ");
    scanf("%d", &y);

    printf("%d << %d의 값 : %d\n", x, y, x << y);

    return 0;
}
//      움직일 값 << 몇번,  << == 2를 곱함 오른쪽, >> == 2를 나눔 왼쪽