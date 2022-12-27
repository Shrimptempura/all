// count.c--표준 입출력
#include <stdio.h>
#include <stdlib.h>     // exit()

int main(int argc, char *argv[])
{
    int ch;     // 읽은 문자를 저장한다.
    FILE *fp;
    unsigned long count = 0;
    if (argc != 2)
    {
        printf("사용법 : %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("%s 파일을 열 수 없습니다.\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);       // putchar(ch);와 같다.
        count++;
    }
    fclose(fp);
    printf("%s 파일에는 %ld개의 문자가 들어 있습니다.\n", argv[1], count);

    return 0;
}