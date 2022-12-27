// 다른 구조체를 멤버로 갖는 구조체 사용
#include <stdio.h>

struct profile          // 신상명세 구조체 선언
{
    int age;
    double height;
};

struct student          // profile 구조체를 멤버로 사용
{
    struct profile pf;
    int id;
    double grade;
};

int main(void)
{
    struct student yuni;        // student 구조체 변수 선언

    yuni.pf.age = 17;           // pf 멤버의 age 멤버 출력
    yuni.pf.height = 164.5;     // pf 멤버의 height 멤버 출력
    yuni.id = 315;
    yuni.grade = 4.3;

    printf("나이 : %d\n", yuni.pf.age);         // pf 멤버의 age 멤버 출력
    printf("키 : %.1lf\n", yuni.pf.height);     // pf 멤버의 height 멤버 출력
    printf("학번 : %d\n", yuni.id);             // id 멤버 출력
    printf("학점 : %.1lf\n", yuni.grade);       // grade 멤버 출력

    return 0;
}