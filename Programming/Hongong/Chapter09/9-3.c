// 포인터를 사용한 두 정수의 합과 평균 계산
#include <stdio.h>

int main(void)
{
    int a = 10, b = 15, total;      // 변수 선언과 초기화
    double avg;                     // 평균을 저장할 변수
    int *pa, *pb;                   // 포인터 동시 선언
    int *pt = &total;               // 포인터 선언과 초기화
    double *pg = &avg;              // double형 포인터 선언과 초기화, 7행의 선언된 변수 avg의 주소 저장..
                                                                    // 자료형은 avg와 동일한 double 사용
    pa = &a;        // 포인터 pa에 변수 a의 주소 대입
    pb = &b;        // 포인터 pb에 변수 b의 주소 대입

    *pt = *pa + *pb;    // a 값과 b 값을 더해 total에 저장
    *pg = *pt / 2.0;    // total 값을 2로 나눈 값을 avg에 저장

    printf("두 정수의 값 : %d, %d\n", *pa, *pb);    // a 값과 b 값 출력
    printf("두 정수의 합 : %d\n", *pt);             // total 값 출력
    printf("두 정수의 평균 : %.1lf\n", *pg);         // avg 값 출력

    return 0;
}