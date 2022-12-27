// 덧셈, 뺄셈, 곱셈, 나눗셈 지원하는 계산기, 각 연산들이 몇 번씩 계산되었는지 기억
// 각 연산을 지원하는 함수들은 자신이 호출된 횟수 화면 출력하기
#include <stdio.h>
int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

int main(void)
{
    int x, y, cal;
    char ch;

    while (1)
    {
        printf("연산을 입력하시오 : ");
        scanf("%d %c %d", &x, &ch, &y);

        if (ch == '+') cal = sum(x, y);

        else if (ch == '-') cal = sub(x, y);

        else if (ch == '*') cal = mul(x, y);

        else if (ch == '%') cal = div(x, y);

        else
            printf("잘못된 연산입니다.\n");
    }

    return 0;
}

int sum(int x, int y)
{
    static int count;
    count++;
    printf("덧셈은 총 %d번 실행되었습니다.\n", count);

    return x + y;
}

int sub(int x, int y)
{
    static int count;
    count++;
    printf("뺄셈은 총 %d번 실행되었습니다.\n", count);

    return x - y;
}

int mul(int x, int y)
{
    static int count;
    count++;
    printf("곱셈은 총 %d번 실행되었습니다.\n", count);

    return x * y;
}

int div(int x, int y)
{
    static int count;
    count++;
    printf("나누기은 총 %d번 실행되었습니다.\n", count);

    return x % y;
}