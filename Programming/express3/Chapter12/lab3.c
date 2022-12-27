// 문자열 상수와 포인터, data segment = 값을 변경가능 메모리 영역, 
// text segment = 값을 읽기만 하고 변경 불가 메모리 영역
// 기본적으로 모든 변수는 데이터 세그먼트, 예시
#include <stdio.h>

int main(void)
{
    char *p = "HelloWorld";
    printf("%s\n", p);

    p = "Welcome to C World";       // 가능
    printf("%s\n", p);

    p = "Goodbye";      // 가능
    printf("%s\n", p);

    // p[0] = 'a'   오류 발생

    return 0;
}