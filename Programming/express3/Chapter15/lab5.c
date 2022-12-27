// fgetc.c
#include <stdio.h>
int main(void)
{
    FILE *fp;
    int c;

    if ((fp = fopen("sample.txt", "r")) == NULL)
        printf("파일 열기 실패\n");
    else
        printf("파일 열기 성공\n");
    
    while ((c = fgetc(fp)) != EOF)
        putchar(c);

    fclose(fp);
    printf("\n");

    return 0;
}

// fgetc()는 지정된 파일로부터 단일 문자를 입력받는다. 인수 fp는 fopen()을 이용하여
// 파일을 열 때 반환되는 FILE에 대한 포인터이다. fgetc()는 fp가 가리키는 파일에서
// 하나의 문자를 읽어서 int형으로 반환한다. 만약 오류가 발생하거나 파일의 끝에 도달
// 하였으면 EOF를 반환한다. EOF는 stdio.h에 정의되어 있으며 -1이다.
// 보통 문자는 -1값이 아니기 때문에 이것은 파일의 끝을 나타내는 기호로 사용될 수 있다.
