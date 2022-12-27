// 2개의 정수를 입력받아서 최대 공약수와 최소 공배수를 반환하는 함수 작성 및 테스트
// 최대 공약수는 유클리드 방법 사용
#include <stdio.h>

void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd);
int get_gcd(int x, int y);

int main(void)
{
    int x, y;
    int lcm, gcd;

    printf("두개의 정수를 입력하시오 : ");
    scanf("%d %d", &x, &y);

    get_lcm_gcd(x, y, &lcm, &gcd);

    printf("최소 공배수는 %d입니다.\n", lcm);
    printf("최대 공약수는 %d입니다.\n", gcd);

    return 0;
}

void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd)
{
    *p_gcd = get_gcd(x, y);
    *p_lcm = (x * y) / *p_gcd;
}

int get_gcd(int x, int y)
{
    if (y == 0)
        return x;
    return get_gcd(y, x % y);
}

// int get_gcd(int x, int y)
// {
// 	while (y != 0)
//     {
//         int a = x % y;
//         x = y;
//         y = a;
//     }

// 	return x;
// }