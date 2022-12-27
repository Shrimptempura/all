// 사용자가 입력한 정수의 모든 약수를 화면에 출력하는 프로그램을 작성하라
#include <stdio.h>

int main(void)
{
    int num, i = 1;

    printf("정수를 입력하시오 : ");
    scanf("%d", &num);

    while(num != i - 1)
    {
        if (num % i == 0)
        {
        printf("%d ", i);
        }
        i++;
    }

    return 0;
}