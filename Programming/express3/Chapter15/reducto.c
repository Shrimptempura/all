// 간단한 파일 압축 프로그램, 한 파일은 r모드, 두번째 파일은 w모드, 두번째 파일에
// 첫번째 파일의 3배수 문자만 저장으로 압축         reducto.c
#include <stdio.h>
#include <stdlib.h>     // exit();
#include <string.h>
#define LEN 10

int main(int argc, char *argv[])
{
    FILE *in, *out;     // 2개의 FILE 포인터 선언
    int ch;
    char name[LEN];
    int count = 0;

// 명령행 전달인자 검사
    if (argc < 2)
    {
        fprintf(stderr, "사용법 : %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
// 입력을 설정한다
    if ((in = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "\"%s\" 파일을 열 수 없다.\n", argv[1]);
        exit(EXIT_FAILURE);
    }

// 출력을 설정한다
    strncpy(name, argv[1], LEN - 5);
    name[LEN - 5] = '\0';
    strcat(name, ".red");       // .red를 덧붙인다.
    if ((out = fopen(name, "w")) == NULL)
    {                           // 쓰기 위해 파일을 연다.
        fprintf(stderr, "출력 파일을 만들 수 없다.\n");
        exit(3);
    }

// 데이터를 복사한다.
    while ((ch = getc(in)) != EOF)
        if (count++ % 3 == 0)
            putc(ch, out);      // 매 세 번째 문자를 출력한다.

// 파일을 닫는다.
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "파일들을 닫는데 에러가 발생했다.\n");

    return 0;
}
