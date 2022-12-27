/* long 변수를 이용하여 수열의 합을 구한다 */
// double 형으로 변환하기
#include <stdio.h>

int main (void)
{
    double n;
    double sum = 0;

    printf("본 프로그램은 정수열의 합을 출력합니다.\n");
    printf("정수 여러 개를 입력하십시오 (수열을 끝내려면 0을 입력하십시오): ");

    scanf("%lf", &n);
    while (n != 0) 
    {
        sum += n;
        scanf("%lf", &n);
    }
    printf("정수열의 합: %lf\n", sum);

    return 0;
}