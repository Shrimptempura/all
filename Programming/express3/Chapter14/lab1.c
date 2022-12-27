// 이중 포인터가 가장 많이 사용되는 상황은 외부에서 정의된 포인터 값을 함수의 인수로
// 받아서 변경하려고 하는 경우
#include <stdio.h>

void set_pointer(char **q);

int main(void)
{
    char *p;
    set_pointer(&p);        // 포인터 p의 주소를 전달한다.
    printf("오늘의 격언 : %s\n", p);

    return 0;
}

void set_pointer(char **q)      // 이중 포인터 q를 통하여 외부의 포인터 p를 변경한다.
{
    *q = "ALL that glisters is not gold";
}
// p는 이미 포인터이므로 이중 포인터가 set_pointer()로 전달

// 이 프로그램에서는 함수 외부에 선언된 포인터를 인수로 받아서 변경하는 전형적인 코드
// main()에서 char형 포인터 p가 선언되었다. p를 set_pointer()의 인수로 전달하여 p의 값을
// 변경하려고 한다. 외부에서 선언된 변수의 값을 인수로 받아서 변경하려면 반드시 변수의
// 주소를 함수에 전달하여야 한다. 따라서 p의 주소를 보내야 한다.
// p는 이미 char형 포인터이므로 이중 포인터가 set_pointer()로 전달된다. 인수로 받은
// 이중 포인터 q를 이용하여 *q에 "ALL~"를 대입한다.


//          잘못된 경우
// set_pointer('p'); --> void set_pointer(char '*q')
//          포인터의 값만 복사된다. 따라서 q를 변경하여도 p는 변경되지 않는다.
// 언뜻 보면 맞는 거 같지만 사실은 잘못되어 있다. 함수 호출 시에 인수들은 복사본이
// 전달된다. set_pointer를 호출할 때 p를 넘겨주면 
