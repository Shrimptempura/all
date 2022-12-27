// 주소와 포인터의 크기
#include <stdio.h>

int main(void)
{
    char ch;
    int in;
    double db;

    char *pc = &ch;
    int *pi = &in;
    double *pd = &db;

    printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));  // 14~16 각 변수의 주소를 구해 크기를 출력하는 문장
    printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));   // ch, in, db는 각각 변수 자체의 크기가 다르지만
    printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));    // 그 시작 주소 값의 크기는 모두 같다.

    printf("char * 포인터의 크기 : %d\n", sizeof(pc));  // 18~20행의 포인터도 가리키는 자료형과
    printf("int * 포인터의 크기 : %d\n", sizeof(pi));   // 상관없이 모두 크기가 같다.
    printf("double * 포인터의 크기 : %d\n", sizeof(pd));

    printf("char * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc)); // 22~24행 같이 포인터에 간접 참조
    printf("int * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));  // 연산자를 사용하여 가리키는 변수를
    printf("double * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pd));   // 출력하면 각각 다른 결과가 나옴

    return 0;
}
/*
1) &ch는 ch의 주소 값
2) pc => 포인터에 &ch, pc = &ch; 포인터에 ch의 주소 대입
3) *pc 가리키는 변수의 크기

중요*
pa = &a;    포인터에 a의 주소 대입
*pa = 10;   포인터로 변수 a에 10 대입
*/

