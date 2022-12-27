// 최고 학점의 학생 데이터
#include <stdio.h>

struct student      // 학생 구조체 선언
{
    int id;
    char name[20];
    double grade;
};

int main(void)
{
    struct student              // 구조체 변수 선언과 초기화
        s1 = {315, "홍길동", 2.4},
        s2 = {316, "이순신", 3.7},
        s3 = {317, "세종대왕", 4.4};

    struct student max;         // 최고 학점을 저장할 구조체 변수

    max = s1;                               // s1을 최고 학점으로 가정
    if (s2.grade > max.grade) max = s2;     // s2가 더 높으면 max에 대입
    if (s3.grade > max.grade) max = s3;     // s3가 더 높으면 max에 대입

    printf("학번 : %d\n", max.id);          // 최고 학점 학생의 학번, 이름, 학점 출력
    printf("이름 : %s\n", max.name);
    printf("학점 : %.1lf\n", max.grade);

    return 0;
}