// 사용자로부터 2개의 정수를 받는것을 함수로 구현하고 싶다. 하지만 한가지 문제가 있다.
// C에서는 함수는 하나의 값만 반환할 수 있다. 2개 이상의 값을 반환시 포인터를 사용해서
// 정수의 합 계산 프로그램 작성하자
#include <stdio.h>

void get_int(int *px, int *py);

int main(void)
{
    int x, y;

    printf("2개의 정수를 입력하시오(예: 10 20) : ");

    get_int(&x, &y);

    printf("정수의 합은 : %d", x + y);
    printf("\n");

    return 0;
}

void get_int(int *px, int *py)
{
    scanf("%d", px);
    scanf("%d", py);
}