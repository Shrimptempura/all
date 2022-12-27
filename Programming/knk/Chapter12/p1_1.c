#include <stdio.h>
#define N 100

int main(void)
{
    char ch, arr[N], *p = arr;
    int len = 0;
    
    printf("Enter a message: ");
    fgets(arr, 100, stdin);     // null 빼고 100 -1
    
    int i = 0;

    while (arr[i] != '\0')
    {
        len++;
        i++;
    }
    // while ((ch = getchar()) != '\n')
    // {
    //     *p++ = ch;
    //     len++;      // 입력한 문장의 길이 확인용
    // }
    
    printf("Reversal is: ");
    for (p = arr + (len - 2); p >= arr; p--)    
    // p = 총 길이; p >= arr(어디까지? 0번째 인덱스.. reversal 이여서), p-- 포인트
        printf("%c", *p);
    printf("\n");
    
    return 0;
}
// arr + 4/ apple 5 , arr + 3 =  arr[0 + 3],  0 1 2 3 