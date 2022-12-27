// 사용자에게 하나의 수를 입력 받아 변수에 저장, 반복문 사용하여 이 변수 값 1씩 감소
// 하면서 이 변수의 값이 0이 될때까지 반복, 반복이 끝나면 벨소리 낸다.
#include <stdio.h>

int main(void)
{
    int i, num;

    printf("카운터의 초기값을 입력하시오 : ");
    scanf("%d", &num);

    for (i = 10; i > 0; i--)
    {
        printf("%2d", num);
        num--;
    }
    printf("\a\n");

    return 0;
}       