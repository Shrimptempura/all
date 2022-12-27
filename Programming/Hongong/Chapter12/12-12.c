/* 문자열을 비교 할때에는 strcmp, strncmp 함수
strcmp 함수는 두 문자열의 사전 순서를 판단하여 그 결과를 반환합니다.
사전 순서는 알파벳 순서를 말한다.
strcmp(str1, str2);     str1이 str2보다 사전에 나중에 나오면 1반환
                        str1이 str2보다 사전에 먼저 나오면 -1 반환
                        str1과 str2가 같은 문자열이면 0 반환. 
strcmp는 대소문자 구분, 숫자나 특수문자 조심 */
// strcmp, strncmp 함수를 사용한 문자열 비교
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[80] = "pear";
    char str2[80] = "peach";

    printf("사전에 나중에 나오는 과일 이름 : ");
    if (strcmp(str1, str2) > 0)     // str1이 str2보다 크면(사전에 나중에 나오면)
        printf("%s\n", str1);
    else                            // str1이 str2  보다 크지 않으면
        printf("%s\n", str2);       // 사전에 먼저 나오면

    return 0;
}
/* strcmp 함수는 두 문자열에서 우선 첫 문자의 아스키 코드 값을 비교합니다.
(아스키코드 값은 알파벳 순서에 따라 커지므로) 아스키코드 값이 크면 사전의 뒤에 나옴


    <strncmp 함수>는 strcmp 함수와 거의 같지만 비교할 문자 수를 세 번째 인수로 지정할수있다.

printf("앞에서 3개의 문자만 비교하면\n");
if (strncmp(str1, str2, 3) == 0)    ==> 앞에서 3개의 문자가 같으면 0 반환
    printf("같다.\n");
else
    printf("다르다.\n");
*/
