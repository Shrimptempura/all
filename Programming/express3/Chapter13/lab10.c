// 포인터를 멤버로 가지는 구조체
#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

struct student {
    int number;
    char name[20];
    double grade;
    struct date *dob;   // 포인터가 구조체의 멤버
};

int main(void)
{
    struct date d = {3, 20, 1990};
    struct student s = {20190001, "Kim", 4.3};

    s.dob = &d;     // 구조체 변수 s의 멤버인 포인터 dob에 구조체 d의 주소를 대입했다.

    printf("학번 : %d\n", s.number);
    printf("이름 : %s\n", s.name);
    printf("학점 : %f\n", s.grade);
    printf("생년월일 : %d년 %d월 %d일\n", s.dob -> year, s.dob -> month, s.dob -> day);

    return 0;
}