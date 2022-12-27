// 5명의 나이를 저장할 배열을 선언하고 사용하는 방법
#include <stdio.h>

int main(void)
{
    int ary[5];         // int형 요소 5개의 배열 선언

    ary[0] = 10;                // 첫 번째 배열 10 대입
    ary[1] = 20;
    ary[2] = ary[0] + ary[1];
    scanf("%d", &ary[3]);       // 키보드로 입력받아 네 번째 요소에 저장

    printf("%d\n", ary[2]);     // 세 번째 배열 요소 출력
    printf("%d\n", ary[3]);
    printf("%d\n", ary[4]);     // 마지막 배열 요소는 쓰레기 값

    return 0;
}