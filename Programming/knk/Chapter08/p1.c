#include <stdio.h>
#include <stdbool.h>

int main(void) 
{
    bool digit_seen[10] = {false, };
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Repeated digit(s) : ");
    while (n > 0) 
    {
        digit = n % 10;
        if (digit_seen[digit])       // braek시 반복 숫자 2개 이상일시 짤림
            printf("%d ", digit);
        digit_seen[digit] = true;
        n /= 10;
    }
// 반복 숫자는 TRUE 처리됨.. 1;
    // if (n > 0) 
    //     printf("Repeated digit ");
    // else 
    //     printf("No repeated digit\n");

    printf("\n");

    return 0;
}