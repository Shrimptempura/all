// 실행결과가 30이 되도록 수식 작성
#include <stdio.h>
void add_by_pointer(int *pa, int *pb, int *pr)
{
    *pr = *pa + *pb;
    // int res = *pr; 이식은 필요가 없다 왜?, 밑에 add_by_pointer()의 a, b, res의 주소값
    // 가리키는 것은 바로 이 함수의 매개변수 각각 *pa, *pb, *pr임
}

int main(void)
{
    int a = 10, b = 20, res = 0;
    add_by_pointer(&a, &b, &res);
    printf("%d\n", res);
    
    return 0;
}