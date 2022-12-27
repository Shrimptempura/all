// 평을 제곱미터로 환산하는 프로그램, 1평은 3.3m^2이다. 기호상수를 이용하여 1평당
// 제곱미터를 나타내라.
#include <stdio.h>
#define ROOM 3.3058

int main(void)
{   
    double space;

    printf("평을 입력하시오 : ");
    scanf("%lf", &space);
    
    printf("%lf평방미터 입니다.\n", space * ROOM);

    return 0;
}