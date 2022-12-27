// 임의의 실수 100개를 생성시킨 후에 텍스트와 이진으로 저장하여보고 그 크기 비교하기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    FILE *fpt, *fpb;
    srand((unsigned)time(NULL));
    char name1[20];
    char name2[20];
    int i;
    double value;

    printf("파일 이름을 입력하시오 : ");
    scanf("%s", name1);

    printf("파일 이름을 입력하시오 : ");
    scanf("%s", name2);

    fpt = fopen(name1, "w");
    fpb = fopen(name2, "wb");

    if (fpt == NULL || fpb == NULL)
    {
        fprintf(stderr, "파일을 열 수 없습니다.");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < 100; i++)
    {
        value = rand() / 100.0;
        fprintf(fpt, "%lf ", value);
        fwrite(&value, sizeof(double), 1, fpb);
    }

    fclose(fpt);
    fclose(fpb);

    return 0;
}