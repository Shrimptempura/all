// 두 개의 텍스트 파일을 비교하여 같은지 다른지 알려주는 프로그램 작성
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *fp, *fp1;
    char name[20];
    char name1[20];

    printf("첫 번째 파일 이름 : ");
    gets(name);

    printf("두 번째 파일 이름 : ");
    gets(name1);

    fp = fopen(name, "r");
    fp1 = fopen(name1, "r");

    if (fp == NULL || fp1 == NULL)
    {
        fprintf(stderr, "파일을 불러 오지 못했습니다.\n");
        exit(EXIT_FAILURE);
    }

    while (1)
    {
        int c1 = fgetc(fp);
        int c2 = fgetc(fp1);
        if (c1 == EOF || c2 == EOF)
            break;
        if (c1 != c2)
        {
            printf("두 파일은 서로 다릅니다.\n");
            return 0;
        }
    }
    printf("두 파일은 서로 같습니다.\n");

    // if (strcmp(fp, fp1) == 0)
    //     printf("두 파일은 서로 같습니다.\n");
    // else
    //     printf("두 파일은 서로 다릅니다.\n");

    fclose(fp);
    fclose(fp1);

    return 0;
}