// 텍스트 파일을 읽어서 각 줄의 앞에 줄 번호를 붙이는 프로그램 작성하라. 줄 번호는
// 폭이 6이고 오른쪽 정렬되도록 하라
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char name[20];
    char buffer[128];
    int i = 0;

    printf("파일을 입력하시오 : ");
    scanf("%s", name);

    if ((fp = fopen(name, "r")) == NULL)
    {
        fprintf(stderr, "%s 파일을 열 수 없습니다.", name);
        exit(EXIT_FAILURE);
    }

    while (fgets(buffer, 128, fp) != 0)
    {
        printf("%d: %s", i + 1, buffer);
        i++;
    }

    fclose(fp);

    return 0;
}