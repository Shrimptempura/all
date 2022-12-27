// 입력 문자의 아스키 코드 값을 출력하는 프로그램
#include <stdio.h>

int main(void)
{
    int res;        // sacnf 함수의 반환값을 저장할 변수
    char ch;        // 문자를 입력할 변수

    while(1)        
    {                               // 리눅스에선 <Ctrl> + <D> 사용
        res = scanf("%c", &ch);     // 문자 입력, <Ctrl> + <Z>를 누르면 -1 반환,
        if (res == -1) break;       // 입력된 문자의 아스키 코드 값 출력
        printf("%d ", ch);
    }

    return 0;
}

// 10이 나오는 이유는 '\n' 개행문자이다.