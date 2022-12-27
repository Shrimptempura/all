#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if ((i % 3) == 0)
        {
            continue; // i가 3의 배수면 sum += i문장을 건너뛰고 블록 끝으로 간 후 다시 반복
        }
        sum += i;
    } // continue 여기로 이동

    return 0; // continue는 반복문 일부를 건너뜀, 반복문 안에서 사용시 다음 실행 위치가 반복문
} // 의 블록 끝이 됨, 블록을 탈출하는것이 아님,

i = 1;
while (i <= 100)
{
    if ((i % 3) == 0)
    {
        continue; // i가 3일때 증감식 i++를 건너뜀으로 while문의 조건식은 계속 참이 됨
    }
    sum += i; // for문과 달리 while문에서 continue사용시 다음 실행 위치가 조건식이 됨
    i++ // 증감식이 실행되지 않는다.
} // 여기로 건너뜀 continue