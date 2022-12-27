// 참조에 의한 호출 -> 원본 수정, 변수의 주소를 함수에 넘겨주면, 호출된 함수에서는 이
// 포인터를 이용하여 원본 변수의 값을 수정할 수 있다. 우리의 목적지의 주소를 복사하여
// 다른 사람에게 주더라도 그 사람이 그 복사된 주소를 가지고 목적지를 찾아가는 것
#include <stdio.h>

void swap(int *px, int *py);

int main(void)
{
    int a = 100, b = 200;

    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int *px, int *py)
{
    int tmp;

    tmp = *px;      // tmp = a;
    *px = *py;      // a = b;
    *py = tmp;      // b = tmp;
}

// swap 함수를 값에 의한 호출로 사용하면 변수의 값만 전달되서 원본 변수 자체를 바꿀수 없다.
// 그래서 참조에 의한 호출로 변수의 주소로 원본을 수정한다.