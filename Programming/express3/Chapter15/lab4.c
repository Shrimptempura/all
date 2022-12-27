// 문자 단위 입출력
// 하나의 문자를 파일에 쓰는 fputc()를 이용하여서 간단하게 텍스트 파일을 생성해서
// 무언가 써보자
#include <stdio.h>

int main(void)
{
    FILE *fp;
    // FILE *fp = NULL;
    // fp = fopen("sample.txt", "w");
    // if (fp = NULL)   printf("파일 열기 실패\n");

    if ((fp = fopen("sample.txt", "w")) == NULL)
        printf("파일 열기 실패\n");
    else
        printf("파일 열기 성공\n");

    fputc('a', fp);     // fputc()을 이용하여서 하나의 문자를 fp가 가리키는 파일에 쓴다.
    fputc('b', fp);
    fputc('c', fp);
    fclose(fp);

    return 0;
}