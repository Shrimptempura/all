// 매크로 예제
#include <stdio.h>
#define SQUARE(x) ((x) * (x))

int main(void)
{
    int x = 2;
    
    printf("%d\n", SQUARE(x));
    printf("%d\n", SQUARE(3));
    printf("%f\n", SQUARE(1.2));
    printf("%d\n", SQUARE(x + 3));
    printf("%d\n", 100 / SQUARE(x));
    printf("%d\n", SQUARE(++x));

    return 0;
}

// 14행에서 오류 발생! 우리가 예상한 값 : 3 * 3 = 9
// 하지만 실행 결과는 16이다. 전처리기에 의하여 SQUARE(++x)는
// ++x * ++x        결과적으로 x의 값이 두 번 증가하게 된것
// 일반적으로 증가나 감소 연산자를 매크로와 함께 사용하면 안된다.
// 만약 SQUARE가 함수였다면 이러한 문제는 발생하지 않는다.