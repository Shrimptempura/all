// 실수를 정수로 변환하면 소수점 이하는 잘려서 버려진다. 예(6.999) --> 6
// 실수에 0.5를 더하여 소수점 이하를 버리는 함수 round(double f)사용, f는 양수가정
#include <stdio.h>

int round1(double num);

int main(void)
{
    double num;
    int upnum;

    printf("실수를 입력하시오 : ");
    scanf("%lf", &num);

    upnum = round1(num);
    printf("반올림 한 값은 %d\n", upnum);
    
    return 0;
}

int round1(double num)
{   
    return (int)(num + 0.5);
}