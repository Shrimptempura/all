// 구조체 변수와 구조체 포인터를 선언했을때, mp를 사용하여 m1에 저장된 값을 출력하세요
// 멤버를 참조할 때는 -> 연산자를 사용한다.
#include <stdio.h>

struct marriage
{
    char name[20];
    int age;
    char sex;
    double height;
};
struct marriage m1 = {"Andy", 22, 'm', 187.5};
struct marriage *mp = &m1;

int main(void)
{
    printf("name : %s\n", mp -> name);
    printf("age : %d\n", mp -> age);
    printf("sex : %c\n", mp -> sex);
    printf("height : %.1lf\n", mp -> height);

    return 0;
}