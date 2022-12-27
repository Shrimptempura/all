#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;

    if ((fp = fopen("sample.txt", "w")) == NULL)
    {
        fprintf(stderr, "sample.txt 파일을 열 수 없습니다.\n");
        exit(EXIT_FAILURE);
    }

    fputs("ABCDEFGHIJKLMNOPQRSTUVWXYZ", fp);
    fclose(fp);

    if ((fp = fopen("sample.txt", "r")) == NULL)
    {
        fprintf(stderr, "sample.txt 파일을 열 수 없습니다.\n");
        exit(EXIT_FAILURE);
    }

    fseek(fp, 10, SEEK_SET);
    printf("10 번째 알파벳은 바로 %c 입니다.\n", fgetc(fp));

    fclose(fp);

    return 0;
}