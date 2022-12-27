// type 응용
#include <stdio.h>
#include <string.h>
#define STU_NUMBER 1
#define REG_NUMBER 2

struct student {
    int type;   // 공용체가 현재 어떤 변수를 사용하는지를 저장
    union {
        int stu_number;         // 학번
        char reg_number[15];    // 주민등록번호
    } id;
    char name[20];
};

void print(struct student s);

int main(void)
{
    struct student s1, s2;

    s1.type = STU_NUMBER;           // 22-24 학번
    s1.id.stu_number = 20190001;
    strcpy(s1.name, "홍길동");
    s2.type = REG_NUMBER;           // 25-27 주민등록번호 사용
    strcpy(s2.id.reg_number, "860101-1056076");
    strcpy(s2.name, "김철수");

    print(s1);
    print(s2);

    return 0;
}

void print(struct student s)
{
    switch (s.type)     // 공용체 타입에 따라 적절한 값 출력
    {
        case STU_NUMBER:
            printf("학번 %d\n", s.id.stu_number);
            printf("이름 : %s\n", s.name);
            break;
        case REG_NUMBER:
            printf("주민등록번호 : %s\n", s.id.reg_number);
            printf("이름 : %s\n", s.name);
            break;
        default:
            printf("타임오류\n");
            break;
    }
}
