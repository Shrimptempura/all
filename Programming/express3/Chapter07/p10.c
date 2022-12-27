// 실수의 거듭 제곱 값을 계산하는 프로그램, 사용자로부터 하나의 실수 r과 거듭 제곱
// 횟수를 나타내는 정수 n을 입력받아서 r^n을 구하여 화면에 출력해라
#include <stdio.h>

int main(void)
{
    double num, res = 1.0;
    int cnt, i;

    printf("실수의 값을 입력하시오 : ");        // 2
    scanf("%lf", &num);

    printf("거듭제곱 횟수를 입력하시오 : ");        // 5
    scanf("%d", &cnt);

    for (i = 1; i <= cnt; i++)
    {
        res *= num;
    }
    printf("결과값은 : %lf\n", res);

    return 0;
}