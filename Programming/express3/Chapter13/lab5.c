// 구조체의 배열(구조체가 여러 개 모인 구조)
struct student {
    int number;
    char name[20];
    double grade;
};

struct student list[100];
// student 구조체의 배열을 list[]란 이름으로 선언, 이 배열은 학생 100명의 데이터 저장가능
// 각 학생들의 데이터는 구조체로 표현되어 있다.

// 배열에서 인덱스가 2인 요소에 있는 구조체에 값을 저장하여 보자
int main(void)
{
    list[2].number = 24;
    strcpy(list[2].name, "홍길동");     // 문자열은 항상 strcpy() 사용
    list[2].grade = 4.3;
}

// 구조체 배열의 초기화, 배열 초기화 안에 구조체 초기화가 들어가야 하므로 중괄호 조심
struct student list[3] {
    {1, "Park", 3.42},
    {2, "Kim", 4.31},
    {3, "Lee", 2.98}
};      // 각 요소들의 초기화 값 사이에는 콤마가 있어야 함, 맨 마지막 원소 다음은 제외

// 구조체 배열의 원소 개수 자동 계산
n = sizeof(list)/sizeof(list[0]);
or;
n = sizeof(list)/sizeof(struct student);