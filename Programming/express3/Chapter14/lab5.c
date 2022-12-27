// 프로그램 인수 사용하기, scanf말고 프로그램 인수로 받아보자
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double mile, km;

    if (argc != 2)
    {
        printf("사용방법 : mile2km 거리\n");
        return 1;
    }

    mile = atof(argv[1]);
    km = 1.609 * mile;
    printf("입력된 거리는 %f km입니다.\n", km);

    return 0;
}
// argv가 가리키는 값들은 수치값이 아니고 문자열이다. 따라서 이들 문자열을 수치값으로
// 변환해주는 함수가 필요하다. stdlib.h -> atoi, atof, atol 참고
