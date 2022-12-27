// 전역 변수 교환 프로그램, 2개의 전역 변수에 값을 입력하고 출력하는 프로그램 작성
// 입력, 교환, 출력 작업은 제시된 함수 원형 지켜 작성
#include <stdio.h>

void input_data(int *pa, int *pb);      // 실행결과
void swap_data(void);                   // 두 정수 입력 : 10 20 <en>
void print_data(int a, int b);          // 두 정수 출력 : 20, 10

int a, b;
int main(void)
{
    input_data(&a, &b);     // 전역 변수에 정수 값 출력
    swap_data();            // 두 변수 교환
    print_data(a, b);       // 교환된 변수값 출력

    return 0;
}
void input_data(int *pa, int *pb)
{
    printf("두 정수 입력 : ");
    scanf("%d %d", pa, pb);
}

void swap_data(void)
{
    int temp;
    
    temp = a;
    a = b;
    b = temp;
}

void print_data(int a, int b)
{
    printf("두 정수 출력 : %d, %d\n", a, b);
}