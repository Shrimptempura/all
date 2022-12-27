// <문자열 단위 입출력> 문자들로 이루어진 한 줄 전체를 입력받으려면 fgets()를 사용하여야
// 한다. fgets()의 원형은 stdio.h에 정의되어 있다. 한 줄의 텍스트를 파일에 쓸 때는
// fputs()를 사용한다.      Syntax : 문자열 단위 입출력
//          char *fgets(char *s, int n, FILE *fp);
//          int fputs(char *s, FILE *fp);
// 문자열 입출력 함수를 사용함으로 텍스트 파일만 복사한다.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp1, *fp2;
    char file1[100], file2[100];
    char buffer[100];

    printf("원본 파일 이름 : ");
    scanf("%s", file1);

    printf("복사 파일 이름 : ");
    scanf("%s", file2);

// 첫번째 파일을 읽기 모드로 연다.
    if ((fp1 = fopen(file1, "r")) == NULL)
    {
        fprintf(stderr, "원본 파일 %s을 열 수 없습니다.\n", file1);
        exit(EXIT_FAILURE);     // exit(1);
    }

// 두 번째 파일을 쓰기 모드로 연다.
    if ((fp2 = fopen(file2, "w")) == NULL)
    {
        fprintf(stderr, "복사파일 %s을 열 수 없습니다.\n", file2);
        exit(EXIT_FAILURE);
    }

// 첫 번째 파일을 두 번째 파일로 복사한다.
    while (fgets(buffer, 100, fp1) != NULL)
        fputs(buffer, fp2);

    fclose(fp1);
    fclose(fp2);

    return 0;
}

// fgets()를 호출하여 원본 파일에서 한줄을 읽어서 배열 buffer로 저장한다.
// fgets()은 줄바꿈 문자를 만나거나 99바이트가 읽히면 읽기를 중단한다.
// 읽은 문자들을 fputs()을 이용하여 복사 파일에 기록한다.
// fgets()에서 읽으면서 자동적으로 문자열의 끝에 NULL 문자가 삽입되기 때문에
// NULL 문자를 붙일 필요가 없다. 줄 바꿈 문자는 저장되지 않는다.