// scanf 함수와 gets 함수는 입력되는 문자열의 크기가 배열 크기를 넘어설 위험성이 있다.
// 안전하게 문자열을 입력하려면 배열 크기를 확인하는 fgets 함수를 사용하는 것이 좋다.
// fgets 함수는 최대 배열의 크기까지만 문자열을 입력한다. 
// fgets 함수의 문자열 입력 방법

#include <stdio.h>
#include <string.h> //

int main(void)
{
    char str[80];

    printf("공백이 포함된 문자열 입력 : ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';    // strlen(str)=널 문자 이전까지 문자수 10개
                                    // str[strlen(str) - 1]= 9는 배열에서 개행 문자가
                                    // 저장된 곳의 위치
                                    // 전체 = 개행 문자를 널 문자로 바꿈

    printf("입력된 문자열은 %s입니다.\n", str);

    return 0;
}

/* fgets 함수는 인수를 3개 사용합니다.
fgets(str, sizeof(str), stdin);
1) 배열명; str
2) 배열의 크기 확인; sizeof(str)
3) 표준 입력; stdin

fgets 함수는 문자열을 저장할 배열명 외에 배열의 크기와 표준 입력 버퍼를 뜻하는
stdin을 함께 사용한다. 문자열의 끝에는 널 문자 때문에 최대 "배열의 크기 -1"
예로 배열의 크기가 5바이트면 str 배열에는 appl까지만 저장된다.
fgets 함수는 키보드로 입력할때 항상 stdin을 넣어야 한다.
*/