// 구조체를 반환하여 두 변수의 값 교환
#include <stdio.h>

struct vision       // 로봇의 시력을 저장할 구조체
{
    double left;
    double right;
};

struct vision exchange(struct vision robot);        // 두 시력을 바꾸는 함수(swap)
// 반환형(struct vision)과 매개변수(struct vision robot) 모두 구조체
int main(void)
{
    struct vision robot;            // 구조체 변수 선언

    printf("시력 입력 : ");
    scanf("%lf%lf", &(robot.left), &(robot.right));         // 시력 입력
    robot = exchange(robot);                                // 교환 함수 호출
    // 먼저 구조체 변수 robot의 값이 함수의 매개벼수로 복사된다.
    printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);

    return 0;
}

struct vision exchange(struct vision robot)     // 구조체를 반환하는 함수
{
    double temp;        // 교환을 위한 임시 변수

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;       // 구조체 변수 반환
}