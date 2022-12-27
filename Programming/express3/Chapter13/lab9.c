// 포인터를 통한 구조체 참조
#include <stdio.h>

struct student {
    int number;
    char name[20];
    double grade;
};

int main(void)
{
    struct student s = {20190001, "홍길동", 4.3};
    struct student *p;      // student 구조체를 가리킬 수 있는 포인터 p를 선언한다.

    p = &s;     // 구조체 변수 s의 주소값을 구조체 포인터 p에 대입하여 p가 s를 가리키게
                                                                        // 하였다.
    printf("학번 = %d 이름 = %s 학점 = %f\n", p -> number, p -> name, p -> grade);

    return 0;
}