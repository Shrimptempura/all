#include <stdio.h>

int func(void);

int main(void)
{
    int i, sum = 0;

    for (i = 0; i < 10; i++)
    {
        sum += func();      // func는 무조건 1이 옴, sum += 1, sum = 1, 10번 더하면 10나옴
    }

    printf("%d\n", sum);
    return 0;
}

int func(void)
{
    static int a = 0;       // static 동적 전역변수 예약어로 반환이 프로그램끝날때까지 반복
    a++;
    return a;
}

// 실행 결과 55