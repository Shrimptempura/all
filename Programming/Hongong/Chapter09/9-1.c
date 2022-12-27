// 변수의 메모리 주소 확인
#include <stdio.h>

int main(void)
{
    int a;
    double b;
    char c;

    printf("int형 변수의 주소 : %u\n", &a); // 주소 연산자로 주소 계산
    printf("double형 변수의 주소 : %u\n", &b);
    printf("char형 변수의 주소 : %u\n", &c);

    return 0;
}

/* 주소는 보통 16진수로 표기, 따라서 주소를 출력시 전용변환 문자 %p를 사용하는 것이
좋다. %p는 데이터 크기에 따라 자릿수를 맞춰 16진수 대문자로 출력
여기서는 설명의 편의를 위해 주소값 10진수, 주소는 음수가 없음으로 %u 사용
printf("%p", &a);
*/