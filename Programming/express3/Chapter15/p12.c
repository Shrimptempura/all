// 파일에서 특정 단어 찾아서 파일 이름과 단어가 위치한 줄 번호 출력하는 프로그램
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char name[20];
    char find[20];
    char buffer[128];
    int count = 0;

    printf("파일 이름 : ");
    scanf("%s", name);

    printf("탐색할 단어 : ");
    scanf("%s", find);

    if ((fp = fopen(name, "r")) == NULL)
    {
        fprintf(stderr, "%s 파일을 열 수 없습니다.", name);
        exit(EXIT_FAILURE);
    }

    while (fgets(buffer, 128, fp) != 0)     // fgets.. \n
    {
        count++;
        if (strstr(buffer, find) != NULL)
        {
            printf("%s: %d  %s", name, count, buffer);
        }
    }
    fclose(fp);

    return 0;
}