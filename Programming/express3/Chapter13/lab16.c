// 성적 우수자 찾기
#include <stdio.h>

struct student {
    int number;
    char name[20];
    double grade;
};

struct student list[] = { {20180001, "홍길동", 4.2}, {20180002, "김철수", 3.2},
                        {20180002, "김영희", 3.9} };

int main(void)
{
    struct student super_stu;
    int i, size;

    size = sizeof(list) / sizeof(list[0]);      // 배열의 크기 계산

    super_stu = list[0];        // 첫번째 학생을 일단 최대 평점이라 가정
    for (i = 0; i < size; i++)
    {
        if (list[i].grade > super_stu.grade)    // 배열의 원소가 현재의 최대값보다 크면
            super_stu = list[i];                // 구조체는 서로 대입가능
    }
    printf("평점이 가장 높은 학생은 (이름 : %s, 학번 : %d, 평점 %f)입니다.\n",
            super_stu.name, super_stu.number, super_stu.grade);
    
    return 0;
}