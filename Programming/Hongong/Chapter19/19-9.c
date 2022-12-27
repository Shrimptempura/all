/* 프로그램을 여러 파일로 나누면 각 파일들이 전역 변수를 공유하기가 쉽지 않다. 컴파일러는
소스 파일 단위로 컴파일하므로 다른 파일에 선언된 전역 변수를 알 수 없기 때문인다.
이때 특별한 선언이 필요하다
    다른 파일에 선언된 전역변수를 사용할 때는 extern 선언을 한다.
    <반면> 다른 파일에서 전역 변수를 공유하지 못하게 할 때는 static을 쓴다.
[main, print_data 함수 정의] */
#include <stdio.h>

int input_data(void);       // 양수를 입력하고 그 합을 반환
double average(void);       // 평균을 구하는 함수
void print_data(double);    // 출력 함수

int count = 0;              // 입력한 양수의 수 누적
static int total = 0;       // 입력한 양수의 합

int main(void)
{
    double avg;

    total = input_data();       // 양수를 입력하고 그 합을 반환
    avg = average();            // 평균 계산
    print_data(avg);

    return 0;
}

void print_data(double avg)
{
    printf(" 입력한 양수의 개수 : %d\n", count);
    printf(" 전체 합과 평균 : %d, %.1lf\n", total, avg);
}