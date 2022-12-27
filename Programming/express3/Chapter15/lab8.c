// < 형식화된 입출력> 파일에 문자 데이터를 기록하는 경우는 앞의 fputc()나 fputs()을 
// 사용한다. 하지만 정수나 실수 데이터를 기록하는 경우는 보통 화면에 문자열로 변환
// 되어서 출력되는 것처럼 파일에서도 문자열로 바꾸어서 저장하는 것이 보통이다.
// 이런 종류의 입출력을 형식화된 입출력이라하며, 프로그래머가 특정 형식을 지정하고
// 이 형식으로 입출력을 하는 것이다. --> fprintf(), fscanf();
//          int fprintf(FILE *fp, const char *format, ... );
//          int fscanf(FILE *fp, const char *format, ...);
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char fname[100];
    int number, count = 0;
    char name[20];
    float score, total = 0.0;

    printf("성적 파일 이름을 입력하시오 : ");
    scanf("%s", fname);

// 성적 파일을 쓰기 모드로 연다.
    if ((fp = fopen(fname, "w")) == NULL)
    {
        fprintf(stderr, "성적 파일 %s을 열 수 없습니다.\n", fname);
        exit(EXIT_FAILURE);
    }

// 사용자로부터 학번, 이름, 성적을 입력받아서 파일에 저장한다.
    while (1)       // 여기서는 읽기모드에 입력! 하는 것이다.
    {
        printf("학번, 이름, 성적을 입력하시오 : (음수이면 종료)");
        scanf("%d", &number);
        if (number < 0) break;      // -1이면 break;
        scanf("%s %f", name, &score);
        fprintf(fp, " %d %s %f", number, name, score);
    }
    fclose(fp);

// 성적 파일을 읽기 모드로 연다.
    if ((fp = fopen(fname, "r")) == NULL)
    {
        fprintf(stderr, "성적 파일 %s을 열 수 없습니다.\n", fname);
        exit(EXIT_FAILURE);
    }

// 파일에서 성적을 읽어서 평균을 구한다.
    while (1)       // while (!feof(fp))
    {       // 여기서는 읽기모드로 feof일시 break, 즉 if절의 위치가 중간일시
        fscanf(fp, "%d %s %f", &number, name, &score);
        total += score;     // 3번째 이후 eof 중단값이 발동하여, 3번째 값을
        count++;            // total과 count를 세지 않고, 1,2번만으로 평균을 냄!
        if (feof(fp))   
            break;
    }

    printf("평균 = %f\n", total / count);
    fclose(fp);

    return 0;
}