// 문자열을 사용하는 char 배열은, 배열에 저장된 문자열의 길이는 배열의 크기와 다를수 있다.
// 만야 배열에 저장된 문자열의 '실제길이'를 알고 싶은 strlen 함수를 사용한다.
// 두 분자열 중 길이가 긴 단어 출력; strlen(str(크기를 확인할 배열명))
#include <stdio.h>
#include <string.h>     // strlen 함수 사용을 위한 헤더파일

int main(void)
{
    char str1[80], str2[80];
    char *resp;                 // 문자열이 긴 배열을 선택할 포인터

    printf("2개의 과일 이름 입력 : ");
    scanf("%s%s", str1, str2);          // 2개의 문자열 입력
    if (strlen(str1) > strlen(str2))    // 배열에 입력된 문자열의 길이 비교
        resp = str1;                    // 첫 번째 배열이 긴 경우 선택
    else
        resp = str2;                    // 두 번재 배열이 긴 경우 선택
    printf("이름이 긴 과일은 : %s\n", resp);    // 선택된 배열이 문자열 출력

    return 0;
}

/* strlen 함수는 배열에 저장된 문자열에서 '널 문자'가 나올때 까지 문자 수를
세어 반환한다. 배열의 크기와 상관없이 실제 저장된 문자열의 길이를 확인 가능하다.

sizeof 연산자는 배열에 저장된 문자열 길이와는 상관 없이 '배열 전체 크기' 계산
*/