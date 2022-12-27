// 파일에서 특정 문자열 탐색, 텍스트 파일에서 특정 문자열을 탐색하는 프로그램 작성해보자
// 사용자로부터 입력 텍스트 파일 이름과 탐색할 문자열을 받는다. 파일을 열어서 한 라인씩
// 문자 배열로 읽어 들인후에, strstr() 라이브러리 함수를 이용하여 문자 배열 안에 찾고자
// 하는 문자열이 있는 지를 검사한다. 만약 발견시, 현재 라인의 번호를 화면에 출력한다.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char fname[128];
    char buffer[256];
    char word[256];
    int line_num = 0;

    printf("입력 파일 이름을 입력하시오 : ");
    scanf("%s", fname);

    printf("탐색할 단어를 입력하시오 : ");
    scanf("%s", word);

    if ((fp = fopen(fname, "r")) == NULL)
    {
        fprintf(stderr, "파일 %s을 열 수 없습니다.\n", fname);
        exit(EXIT_FAILURE);
    }

    while (fgets(buffer, 256, fp))
    {
        line_num++;
        if (strstr(buffer, word))
            printf("%s : %d 단어 %s이 발견되었습니다.\n", fname, line_num, word);
    }
    fclose(fp);

    return 0;
}

// 29row; while 루프를 이용하여 파일로부터 한라인씩 입력받아서 그 안에 탐색 단어 있는지
// 검사, strstr()을 사용한다. strstr()은 문자열안에 다른 문자열 있는지 검사함수
// 발견되면 그 문자열이 발견된 위치를 반환, 발견x 일시, NULL값을 반환,
// 따라서 NULL이 아닌 다른 값이 발견되면 문자열이 발견된 것이다.
// 따라서 그 경우에는 파일 이름과 라인 번호를 출력한다.
// fgets()이 0이면 파일에 더 이상의 줄이 없다는 것을 의미 -> 종료;