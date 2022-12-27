// 사용자로부터 받은 파일 이름으로 텍스트 파일을 연 후에 파일 안에 들어 있는 인쇄
// 가능한 문자들의 개수를 계산하여 출력해라
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    FILE *fp;
    char name[20];
    int count = 0;

    printf("파일 이름을 입력하시오 : ");
    scanf("%s", name);

    if ((fp = fopen(name, "r")) == NULL)
    {
        fprintf(stderr, "%s 파일을 열 수 없습니다.", name);
        exit(EXIT_FAILURE);
    }

    while (1)
    {
        if (isprint(fgetc(fp)))
            count++;
        if (feof(fp))
            break;
    }

    // while (c = fgetc(fp)) != EOF)             int c;
    //     if(isprint(c)) count++;

    printf("문자의 개수는 : %d\n", count);
    fclose(fp);

    return 0;
}