// 배열명에 정수 연산을 수행하여 배열 요소 사용
#include <stdio.h>

int main(void)
{
    int *ary;
    int i;
    int data;

    ary = &data;

    *(ary + 0) = 10;        // ary[0] = 10
    *(ary + 1) = *(ary + 0) + 10;       // ary[1] = ary[0] + 10

    printf("세 번째 배열 요소에 키보드 입력 : ");
    scanf("%d", ary + 2);       // &ary[2]

    for (i = 0; i < 3; i++)     // 모든 배열 요소 출력
    {
        printf("%5d", *(ary + i));      // ary[i]
    }

    return 0;
}

// 주소 + 정수  ->  주소 + (정수 * 주소를 구한 변수의 크기)