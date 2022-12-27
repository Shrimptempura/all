// 명령어 라인으로 주어진 2개의 텍스트 파일을 합하여 하나의 파일로 만드는 프로그램
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2, *fp3;
    char name1[20];
    char name2[20];
    char name3[20];
    char buffer[128];

    // printf("첫 번째 파일을 입력하시오 : ");
    // scanf("%s", name1);

    // printf("두 번째 파일을 입력하시오 : ");
    // scanf("%s", name2);

    // printf("하나로 합칠 파일을 입력하시오 : ");
    // scanf("%s", name3);

    if (argc >= 4)
    {
        strcpy(name1, argv[1]);     // 명령행 인수라, argv[]에 입력값으로 바로
        strcpy(name2, argv[2]);     // strcpy로 name에 저장
        strcpy(name3, argv[3]);
    }
    else
    {
        printf("인수가 부족합니다.\n");
        return 0;
    }

    printf("%s 파일 + %s 파일을 %s 파일로 복사합니다.\n", name1, name2, name3);

    if ((fp1 = fopen(name1, "r")) == NULL)
    {
        fprintf(stderr, "%s 파일을 열 수 없습니다.", name1);
        exit(EXIT_FAILURE);
    }

    if ((fp2 = fopen(name2, "r")) == NULL)
    {
        fprintf(stderr, "%s 파일을 열 수 없습니다.", name2);
        exit(EXIT_FAILURE);
    }

    if ((fp3 = fopen(name3, "w")) == NULL)
    {
        fprintf(stderr, "%s 파일을 열 수 없습니다.", name3);
        exit(EXIT_FAILURE);
    }

    while (fgets(buffer, 128, fp1) != NULL)
        fputs(buffer, fp3);

    while (fgets(buffer, 128, fp2) != NULL)
        fputs(buffer, fp3);

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}