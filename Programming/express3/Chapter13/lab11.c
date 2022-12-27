// 벡터 연산 예시
#include <stdio.h>

struct vector {
    float x;
    float y;
};
struct vector get_vector_sum(struct vector a, struct vector b);

int main(void)
{
    struct vector a = {2.0, 3.0};
    struct vector b = {5.0, 6.0};
    struct vector sum;      // sum은 벡터의 합이 저장될 예정으로 초기화되지 않았다.

    sum = get_vector_sum(a, b);     // gvs()호출하여 va와 vb의 합을 계산, 인수 2개로
    // 구조체 변수 a와 b가 전달되었다. 이들 구조체 변수의 복사본이 함수로 전달되었다.
    // 함수에서 반환되는 구조체를 sum에 대입한다.
    
    printf("벡터의 합은 (%f, %f)입니다.\n", sum.x, sum.y);

    return 0;
}

struct vector get_vector_sum(struct vector a, struct vector b)
{
    struct vector result;

    result.x = a.x + b.x;
    result.y = a.y + b.y;

    return result;
}