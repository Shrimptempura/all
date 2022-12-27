// 3개의 정수 중에서 최소값을 구하는 매크로 GET_MIN(x, y, z)을 정의하고 이것을 사용하여서 사용자로부터 받은
// 3개의 정수 중에서 최소값을 계산하여서 출력하는 프로그램을 작성해라
#include <stdio.h>
#define GET_MIN(x, y, z)

int main(void)
{       // 매크로 함수에 x, y, z 값이 초기화가 안됨;;
    int x, y, z, result;

    printf("3개의 정수를 입력하시오 : ");
    scanf("%d %d %d", &x, &y, &z);
    
    GET_MIN(x, y, z);

#ifdef GET_MIN(x, y, z)
#if (((x) < (y)) && ((x) < (z)))
    result = x;
#elif (((y) < (x)) && ((y) < (z)))
    result = y;
#elif (((z) < (x)) && ((z) < (y)))
    result = z;
#endif
#endif
    // GET_MIN(x, y, z);

    printf("최소값은 %d 입니다.\n", result);

    return 0;
}