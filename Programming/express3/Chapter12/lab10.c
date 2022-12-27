// 전용 함수 사용; 문자열을 정수나 실수로 변환, atoi();, atof();
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s1[] = "100";
    char s2[] = "12.93";
    char buffer[100];

    int i;
    double d;
    double result;

    i = atoi(s1);   // atoi: str형을 int형으로 변환
    d = atof(s2);   // atof : str형을 double형으로 변환

    result = i + d;

    sprintf(buffer, "%f", result);
    printf("연산 결과는 %s입니다.\n", buffer);

    return 0;
}