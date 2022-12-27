// 함수 포인터를 사용한 함수 호출
#include <stdio.h>

int sum(int, int);      // 함수 선언

int main(void)
{
    int (*fp)(int, int);        // 함수 포인터 선언
    int res;                    // 반환값을 저장할 변수

    fp = sum;                       // 함수명을 함수 포인터에 저장
    res = fp(10, 20);                // 함수 포인터로 함수 호출
    // res = (*sum)(10, 20);    // 12행. 함수명에 괄호와 함께 간접 참조 연산자를 
                                // 사용하여 호출
    printf("result : %d\n", res);   // 반환값 출력

    return 0;
}

int sum(int a, int b)   // 함수 정의
{
    return (a + b);
}
/* 13행; 함수의 주소도 포인터에 저장하면 포인터로 함수를 호출 할수 있다.
주소를 저장할 포인터는 주소가 가리키는 것과 동일한 형태를 가리키도록 선언합니다.
따라서.. sum 함수의 형태를 파악하는 것이 우선입니다.

함수의 주소 sum을 저장할 함수 포인터를 선언..
함수 포인터는 변수명 앞에 '*'을 붙여 포인터임을 표시한다.

int (*fp)(int, int);
fp는 포인터, 가리키는 것은 int, (int, int)형 함수

반드시 변수명을 별표와 함께 괄호로 묶어야 한다. 괄호가 없으면 주소를 반환하는 함수의
선언이 되므로 주의해야 한다.
int *fp(int, int);      // 8행, 두 정수를 인수로 받고 주소를 반환하는 함수의 선언
res = fp(10, 20);       // 12행, 함수 포인터로 함수 호출, (*fp)(10, 20);도 가능

*/
