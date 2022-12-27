// 사용자로부터 정수를 16진수로 입력받아서 8진수, 10진수, 16진수 형태로 출력하자
#include <stdio.h>

int main(void)
{
    int data;

    printf("16진수 정수를 입력하시오 : ");
    scanf("%x", &data);

    printf("8진수로는 %#o입니다.\n", data);
    printf("10진수로는 %d입니다.\n", data);
    printf("16진수로는 %#x입니다.\n", data);

    return 0;
}
/* 
16진수를 8, 10, 16으로 출력할때
8진수 = %#o, 10진수 = %d, 16진수 = %#x
*/