// 구조체, 공용체, 열거형의 이름은 항상 struct 등 예약어와 함께 써야 하므로 불편하다.
// 특히 함수의 매개변수나 반환값의 형태에 쓰면 함수 원형이 복잡해 진다.
// 이때 typedef를 사용하면 자로형 이름에서 struct와 같은 예약어를 생략할 수 있다.
// typedef를 사용한 자료형 재정의
#include <stdio.h>

struct student
{
    int num;
    double grade;
};
typedef struct student Student;     // Student 형으로 재정의
void print_data(Student *ps);       // 매개변수는 Student형의 포인터

int main(void)
{
    Student s1 = {315, 4.2};        // Student형의 변수 선언과 초기화

    print_data(&s1);                // Student형 변수의 주소 전달

    return 0;
}

void print_data(Student *ps)
{
    printf("학번 : %d\n", ps -> num);       // Student 포인터로 멤버 접근
    printf("학점 : %.1lf\n", ps -> grade);
}
/* typedef 사용법
typedef 구조체_이름 새_자료형_이름;
typedef struct student Student;         구조체_이름 = struct student, 새_자료형_이름 = Student;

재정의 이후 17행과 같이 구조체 struct student를 Student로 간단히 쓸 수 있다.

물론 재정의하기 전의 이름도 함께 사용할 수 있다.
보통은 일반 변수명과 구별하기 위해 재정의된 자료형의 이름을 대문자로 쓴다.

재정의하기 전의 자료형을 굳이 사용할 필요가 없다면 다음과 같이 형 선언과 동시에 재정의 방법이 있다.
typeder struct      // 재정의될 것이므로 구조체 이름 생략
{
    int num;
    double grade;
} Student;          // 재정의된 자료형 이름

typedef문은 기본 자료형 재정의가 가능하다
- 복잡한 응용 자료형뿐만 아니라 필요에 따라 기본 자료형도 재정의 해서 사용할 수 있다.
예로 unsinged int형의 변수가 크기와 관련된 데이터를 저장하면 자료형 이름이 의미를 갖도록
typedef unsigned int nbyte; 처럼 재정의가 가능하다
*/