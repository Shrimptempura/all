// main.c
#include <stdio.h>
#include "power.h"      // 현재 디렉토리에서 power.h를 찾아라는 의미

int main(void)
{
    int x, y;

    printf("x의 값을 입력하시오 : \n");
    scanf("%d", &x);
    printf("y의 값을 입력하시오 : \n");
    scanf("%d", &y);
    printf("%d의 %d 제곱값은 %f\n", x, y, power(x, y));
                                        // power(x, y); 외부 파일에 정의된 함수를 사용
                                        // 링크 단계에서 서로 연결된다.
    return 0;
}