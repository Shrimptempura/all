// 사용자가 입력한 정수의 자리수를 반대로 출력프로그램, do while 사용
#include <stdio.h>

int main(void)
{
    int num;
    int s1, s10, s100, s1000;

    printf("정수를 입력하시오 : ");
    scanf("%d", &num);

    s1 = num % 10;              // 1의 자리는 n % 10
    s10 = (num / 10) % 10;      // 10의 자리는 n / 10 후에 n % 10
    s100 = (num / 100) % 10;    // 100의 자리는 n / 100 후에 n % 10
    s1000 = (num /1000) % 10;

    printf("%d%d%d%d\n", s1, s10, s100, s1000);

    return 0;
}