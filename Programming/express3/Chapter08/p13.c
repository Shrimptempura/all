// 두 개의 정수 n, m을 입력받아서 n이 m의 배수이면 1을 반환하고 그렇지 않으면 0을 반환
// 하는 함수 is_multiple(int n, int m)를 작성후 테스트하자
#include <stdio.h>

int is_multiple(int n, int m);

int main(void)
{
    int n, m;

    printf("첫번째 정수를 입력하시오 : ");
    scanf("%d", &n);

    printf("두번째 정수를 입력하시오 : ");
    scanf("%d", &m);

    if (is_multiple(n , m) == 1)
    {
        printf("%d는 %d의 배수입니다.\n", n, m);
    }
    else 
    {
        printf("%d는 %d의 배수가 아닙니다.\n", n, m);
    }

    return 0;
}

int is_multiple(int n, int m)
{
    if ((n % m) == 0)
        return 1;
    else
        return 0;
}