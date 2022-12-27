// 사용자가 입력하는 텍스트를 파일에 저장하여 주는 프로그램 작성하자. 사용자가 CTRL + D
// 입력하면 종료하는 것으로 가정
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char name[20];
    char buffer[128];

    printf("파일의 이름을 입력하시오 : ");
    scanf("%s", name);
    getchar();

    if ((fp = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "%s 파일을 열 수 없습니다.", name);
        exit(EXIT_FAILURE);
    }

    // while (fgets(buffer, 128, stdin) != 0), fgets()가 0을 반환시 ctrl + d 입력한것
    //     fputs(buffer, fp);

    while (1) 
    {
        char *p = gets(buffer);     // 요건 gets로 한문장(개행)을 buffer에 저장
        if( p == NULL )             // p가 널이면 파일의 끝(아마 buffer의 용량이라 생각)
            break;                  
        fprintf(fp, "%s\n", buffer);    // buffer에 박은거 한줄식 fprintf
    }
    fclose(fp);

    return 0;
}