// reverse.c w.fseek() & ftell()
#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032'       // DOS 텍스트 파일에서 파일의 끝 표지
#define SLEN 81

int main(void)
{
    char file[SLEN];
    char ch;
    FILE *fp;
    long count, last;

    puts("처리할 파일의 이름을 입력하시오 : ");
    scanf("%80s", file);

    if ((fp = fopen(file, "rb")) == NULL)
    {                               // 읽기 전용, 바이너리 모드
        printf("%s 파일을 열 수 없다.\n", file);
        exit(EXIT_FAILURE);
    }

    fseek(fp, 0L, SEEK_END);        // 파일의 끝으로 간다.
    last = ftell(fp);
    for (count = 1L; count <= last; count++)
    {
        fseek(fp, -count, SEEK_END);        // 뒤로 간다.
        ch = getc(fp);
        if (ch != CNTL_Z && ch != '\r')     // MS_DOS 파일
            putchar(ch);
    }
    putchar('\n');
    fclose(fp);

    return 0;
}