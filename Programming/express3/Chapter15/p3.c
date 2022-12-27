// 하나의 파일을 다른 이름의 파일로 복사하는 프로그램을 작성하라. 이진파일이라고 가정
// fread()와 fwrite()를 사용한다.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp1, *fp2;
    char name1[20];
    char name2[20];
    char buffer[256];
    int count;

    printf("원본 파일 이름 : ");
    scanf("%s", name1);

    printf("복사 파일 이름 : ");
    scanf("%s", name2);

    if ((fp1 = fopen(name1, "rb")) == NULL)
    {
        fprintf(stderr, "%s 파일을 열 수 없습니다.", name1);
        exit(EXIT_FAILURE);
    }

    if ((fp2 = fopen(name2, "wb")) == NULL)
    {
        fprintf(stderr, "%s 파일을 열 수 없습니다.", name2);
        exit(EXIT_FAILURE);
    }
        // fread는 읽기에 성공시 성공한 읽기 횟수가 반환, 0일시 파일의 끝 도달
    while ((count = fread(buffer, sizeof(char), 10, fp1)) != 0)
    {
        fwrite(buffer, sizeof(char), count, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}