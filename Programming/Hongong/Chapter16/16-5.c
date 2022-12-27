// 동적 할당 영역에 저장한 문자열을 함수로 처리하는 예
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char **ps);      // 동적 할당 영역의 문자열을 출력하는 함수

int main(void)
{
    char temp[80];              // 임시 char 배열
    char *str[21] = {0};        // 문자열을 연결할 포인터 배열, 널 포인터로 초기화
    int i = 0;

    while (i < 20)      // 최대 20개까지 입력
    {
        printf("문자열을 입력하세요 : ");
        gets(temp);
        if (strcmp(temp, "end") == 0) break;        // end가 입력되면 반복 종료
        str[i] = (char *)malloc(strlen(temp) + 1);  // 문자열 저장 공간 할당
        strcpy(str[i], temp);                       // 동적 할당 영역에 문자열 복사
        i++;
    }
    print_str(str);     // 입력한 문자열 출력

    for (i = 0; str[i] != NULL; i++)        // str에 연결된 문자열이 없을 때까지
    {
        free(str[i]);       // 동적 할당 영역 반환
    }

    return 0;
}

void print_str(char **ps)       // 이중 포인터 선언
{
    while (*ps != NULL)         // 포인터 배열의 값이 널 포인터가 아닌 동안 반복
    {
        printf("%s\n", *ps);    // ps가 가리키는 것은 포인터 배열의 요소
        ps++;                   // ps가 다음 배열 요소를 가리킨다.
    }
}
/*
11행 char *str[21] = {0}; ==> 배열명 str은 포인터 배열의 첫 번째 요소를 가리키므로
가리키는 것의 형태는 (char *)형이다 <따라서> 33행에서 str을 저장할 매개변수로 (char *)을
가리키는 이중 포인터를 선언한다 ==> void print_str(char **ps)

함수가 호출되고 매개변수 ps가 배열명 str을 저장하면 ps 역시 배열명과 같이 사용할수 있으므로
함수 안에서 반복문을 사용하여 문자열 출력한다.

main 함수에서 문자열을 직접 출력할때는 str이 배열명으로 그 값을 바꿀수 없다.
<따라서> str[i]와 같이 배열 표현을 사용하거나 *(str + i)와 같이 정수로 더하면서
각 문자열을 출력한다.

<그러나> 배열명을 포인터에 저장하면 포인터 자신의 값을 바꿀 수 있으므로 매개변수를 하나씩
증가시키면서 문자열을 출력할 수 있다.

    <주의점>
    포인터나 포인터 배열을 auto 지역변수로 선언시 쓰레기 값이 주소로 존재한다.
    만약 쓰레기 값이 참조가 불가능한 코드 영역의 주소이나 부주의로 이 값을 참조하면
    프로그램은 중간에 멈춘다.
        <따라서> 포인터 배열은 선언과 동시에 '널 포인터'로 초기화하고 참조할 때
        널 포인터인지 검사하면 더 안정적인 프로그래밍이 가능하다.
        물론 최소한 포인터 배열의 마지막 요소는 널 포인터 자리는 남겨놔야 한다.
*/