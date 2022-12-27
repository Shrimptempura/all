// 텍스트 파일을 열어서 파일 안에 들어 있는 문자들을 모두 대문자로 변경하여 새로운
// 파일에 저장하는 프로그램을 작성한다.
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp1, *fp2;
    char name1[20];
    char name2[20];
    char pro;

    printf("첫 번째 파일 이름 : ");
    scanf("%s", name1);

    printf("두 번째 파일 이름 : ");
    scanf("%s", name2);

    if ((fp1 = fopen(name1, "r")) == NULL)
    {
        fprintf(stderr, "%s 파일을 불러오지 못했습니다.", name1);
        exit(EXIT_FAILURE);
    }

    if ((fp2 = fopen(name2, "w")) == NULL)
    {
        fprintf(stderr, "%s 파일을 생성하지 못했습니다.", name2);
        exit(EXIT_FAILURE);
    }

    while (1)
    {       // EOF 위치에 따라 오류가 나기도 함, EOF if절이 fputc 아래로 갈 경우
            // tmp.txt의 맨 마지막 부분에 쓰레기 값 오류가 남. 하지만 중간일 경우
            // 오류가 안남. 왜? 
        pro = fgetc(fp1);
        if (feof(fp1))      // if (pro == EOF)  break;
            break;
        fputc(toupper(pro), fp2);
    }   // if절이 마지막일 경우, 대문자 넣고 보니 이놈이 EOF였다 --> 쓰레기 값
        // 그래서 한글자 받고, 바로 EOF면 끝, EOF를 fputc로 넣은 다음에 break를 하면
        // 당연히 쓰레기 값
    fclose(fp1);
    fclose(fp2);

    return 0;
}