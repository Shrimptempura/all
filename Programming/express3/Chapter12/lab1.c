// 기초 문자열 출력
#include <stdio.h>

int main(void)
{
    int i;
    char str[4];

    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\0';

    i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);   // 문자 배열에 저장된 문자열 출력 반복문 방법
        // printf("%s", str); 방법도 있다. 또는 printf(str); 이것도 출력된다.
        i++;
    }
    printf("\n");

    return 0;
}
// <문자 배열 초기화 방법>
// 1) char str[4] = {'a', 'b', 'c', '\0'};
// 2) char str[4] = "abc"; --> 컴파일러는 자동으로 문자열 끝에 널 문자 추가, 널 크기 주의
// 3) char str[4] = ""  --> 널 문자열로 초기화
// 4) char str[] = "abc";  --> 배열크기 미지정시, 자동으로 문자열에 맞추어 설정, 배열의
//                             크기 4로 지정;
