#include <stdio.h>
#define N 100

int main(void)
{
    char ch, arr[N], *p = arr;
    int len = 0;
    
    printf("Enter a message: ");
    while ((ch = getchar()) != '\n')
    {
        *p++ = ch;
        len++;      // 입력한 문장의 길이 확인용
    }
    
    printf("Reversal is: ");
    for (p = arr + (len - 1); p >= arr; p--)    
    // p = 총 길이; p >= arr(어디까지? 0번째 인덱스.. reversal 이여서), p-- 포인트
        printf("%c", *p);
    printf("\n");
    
    return 0;
}