// 이진 파일에 학생 정보 저장하기
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

struct student {
    int number;
    char name[10];
    double avg;
};

int main(void)
{
    struct student record[SIZE] = {
        {1, "KIM", 3.99},
        {2, "MIN", 2.68},
        {3, "LEE", 4.01}
    };

    struct student s;
    FILE *fp;
    int i;
    
    if ((fp = fopen("student.dat", "wb")) == NULL)
    {
        fprintf(stderr, "student.dat 파일을 열 수 없습니다.");
        exit(EXIT_FAILURE);
    }

    fwrite(fwrite, sizeof(struct student), SIZE, fp);
    fclose(fp);

    if ((fp = fopen("student.dat", "rb")) == NULL)
    {
        fprintf(stderr, "student.dat 파일을 열 수 없습니다.");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < SIZE; i++)
    {
        fread(&s, sizeof(struct student), 1, fp);
        printf("학번 = %d, 이름 = %s, 평점 = %f\n", s.number, s.name,
        s.avg);
    }
    fclose(fp);

    return 0;
}