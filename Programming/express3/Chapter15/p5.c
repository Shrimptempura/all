// 학생들의 교과목 성적이 저장되어 있는 텍스트 파일을 읽어서 성적의 평균을 구하여
// 파일에 쓰는 프로그램 작성하라. 평균은 소수점 2자리 까지
#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    char name[20];
    int kor;
    int math;
    int eng;
} STUDENT;

int main(void)
{
    FILE *fp, *fp1;
    char name[20];
    char name1[20];
    char buffer[128];

    printf("파일 이름을 입력하시오 : ");
    scanf("%s", name);

    printf("평균을 입력할 파일의 이름을 입력하시오 : ");
    scanf("%s", name1);

    if ((fp = fopen(name, "r")) == NULL)
    {
        fprintf(stderr, "%s 파일을 열 수 없습니다.", name);
        exit(EXIT_FAILURE);
    }

    if ((fp1 = fopen(name1, "w")) == NULL)
    {
        fprintf(stderr, "%s 파일을 열 수 없습니다.", name1);
        exit(EXIT_FAILURE);
    }

    fgets(buffer, 128, fp);
    fprintf(fp1, "이름\t평균\n");

    while (1)
    {
        STUDENT data;
        double avg;
        fscanf(fp, "%s %d %d %d", data.name, &data.kor, &data.math, &data.eng);
        if (feof(fp))
            break;
        avg = (data.kor + data.math + data.eng) / 3.0;
        fprintf(fp1, "%s\t%.2lf\n", data.name, avg);
    }

    fclose(fp);
    fclose(fp1);

    return 0;
}