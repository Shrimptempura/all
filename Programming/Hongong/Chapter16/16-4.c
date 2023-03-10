// 입력할 문자열의 길이를 알수 없는 경우 무조건 큰 배열을 사용하면 저장공간의 낭비다
// 동적 할당을 하게되면 입력되는 문자열의 길이에 맞게 저장 공간 사용 가능
// 3개의 문자열을 저장하기 위한 동적 할당
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char temp[80];      // 임시 char 배열
    char *str[3];       // 동적 할당 영역을 연결할 포인터 배열
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("문자열을 입력하세요 : ");
        gets(temp);         // 문자열 입력, gets 문자열반 받을수 있고, 개행 기준 입력 받음
        str[i] = (char *)malloc(strlen(temp + 1));      // 문자열 저장 공간 할당
        strcpy(str[i], temp);                           // 동적 할당 영역에 문자열 복사
    }

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", str[i]);     // 입력된 문자열 출력
    }

    for (i = 0; i < 3; i++)
    {
        free(str[i]);               // 동적 할당 영역 반환
    }

    return 0;
}
/* 문자열을 입력하기 전에는 그 길이를 알 수 없으므로 우선 10행에서 충분한 크기(80)의 char 배열을
선언하고 문자열을 입력한다. 그리고 그 길이에 맞게 다시 '동적으로 할당한후' 입력한 문자열을
복사한다(strcpy), 이 작업을 반복하면 여러 개의 문자열을 그 길이에 맞게 저장할 수 있다.
<단> 동적 할당 영역을 연결할 포인터가 필요하므로 11행에서 포인터 배열을 선언한다.

14 ~ 20행에서 3개의 문자열을 반복하여 입력한다.
18행에서 입력한 문자열의 길이를 계산하여 malloc 함수의 인수로 준다.
이때 strlen 함수는 '널 문자'제외하고 문자열의 길이를 계산해서
malloc 함수에 인수로 줄 때는 '1'을 더해서 널 문자도 포함할수 있도록 저장 공간을 할당해야 함
*/