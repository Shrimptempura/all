// 10을 더하기 위해 값을 인수로 주는 경우
#include <stdio.h>

int add_ten(int a);        // 함수 선언
// void add_ten(int a);
int main(void)
{
    int a = 10;
    // add_ten(a);
    a = add_ten(a);             // a 값을 복사하여 전달
    printf("a : %d\n", a);

    return 0;
}
// void add_ten(int a);
int add_ten(int a)         // 8행의 a와 다른 독립적인 저장 공간 할당
{   
    int b = b + 10;
    return b;             // 16행의
}   // return 제거

// 1차원적 핵심은 변수이름 같아도 함수가 다르면 인정하지 않는다.
// 그래서 a가 그냥 int a = 10;으로 10이 나온거고 20이 나오길 원하면
// (int a = 10;)의 a = add_ten(a)(a = a + 10) 이런식으로 대입해야 한다.
// 또한 int add_ten(int a)함수에는 값을 반환하는 return 문 필요하며
// 반환값이 없는 void는 반환이 안됨으로 int함수로 선언한다.