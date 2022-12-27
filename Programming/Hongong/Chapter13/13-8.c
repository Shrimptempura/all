// 주소를 반환하여 두 정수의 계산
#include <stdio.h>

int *sum(int a, int b);     // int형 변수의 주소를 반환하는 함수 선언

int main(void)
{
    int *resp;              // 반환값을 저장할 포인터 resp(result pointer)

    resp = sum(10, 20);     // 반환된 주소는 resp에 저장
    printf("두 정수의 합 : %d\n", *resp);       // resp가 가리키는 변수값 출력

    return 0;
}

int *sum(int a, int b)      // int형 변수의 주소를 반환하는 함수
{
    static int res;         // 정적 지역 변수

    res = a + b;            // 두 정수의 합을 res(result)에 저장

    return &res;            // 정적 지역 변수의 주소 반환
}
/* 
1) 반환값의 자료형은 반환값을 저장할 포인터의 자료형과 같아야 합니다.
2) 지역 변수의 주소를 반환해서는 안 됩니다.
    sol) 18행의 static int res;는 정적지역 변수로 함수가 반환된 후에도 저장공간이
    계속 유지되므로 호출한 함수에서 포인터 연산을 통해 언제든지 그 변수를 사용할수있다.
        그러나 일반 지역 변수는 함수가 반환되면 저장공간이 회수되어
        다른 용도로 재활용 될지 알수 없다. 따라서 지역 변수의 주소를 반환하면 안된다.
*/