// 구조체를 멤버를 가지는 구조체
#include <stdio.h>
#include <stdlib.h>

struct date {
    int year;
    int month;
    int day;
};

struct student {
    int number;
    char name[10];
    struct date dob;    // date of birth
    double grade;
};
struct student s1;

int main(void)
{
    s1.dob.year = 1983;
    s1.dob.month = 03;
    s1.dob.day = 29;

    return 0;
}