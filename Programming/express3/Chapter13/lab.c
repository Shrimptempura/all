// student 구조체 간단 예시
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int number;
    char name[20];
    double grade;
};

int main(void)
{
    struct student s;

    s.number = 20190001;
    strcpy(s.name, "홍길동");
    s.grade = 4.3;

    printf("학번 : %d\n", s.number);
    // scanf("%d", &s.number);
    printf("이름 : %s\n", s.name);
    // scanf("%s", s.name);
    printf("학점 : %.2lf\n", s.grade);
    // scanf("%lf", &s.grade);

    return 0;
}