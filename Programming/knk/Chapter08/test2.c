/* Checks number for repeated digits */

#include <stdbool.h>    /* C99 only */
#include <stdio.h>  /* 역자: 헤더파일은 알파벳 순서로 추가해주는 것이 좋다 */

int main(void) 
{
    bool digit_seen[10] = {false, };
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) 
    {
        digit = n % 10;
        if (digit_seen[digit]) 
            break;
        digit_seen[digit] = true;
        n /= 10;
    }

    if (n > 0) 
        printf("Repeated digit\n");
    else 
        printf("No repeated digit\n");

    return 0;
}