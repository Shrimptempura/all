// 영상 파일 이름 자동 생성
// 이미지에 순차적 번호를 붙여 파일 저장, 파일 이름은 문자열에 변수의 값을 더하여 파일
// 이름 생성 가능하다.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char filename[100];
    char s[100];
    int i;

    for (i = 0; i < 6; i++)
    {
        strcpy(filename, "image");      // filename에 "image"를 복사
        sprintf(s, "%d", i);            // s에 변수 i의 값을 문자열로 변환하여서 저장
        strcat(filename, s);            // filenmae에 s를 이어 붙인다. (strcat)
        strcat(filename, ".jpg");       // filename에 ".jpg"를 이어 붙인다. (strcat)
        printf("%s\n", filename);
    }

    return 0;
}