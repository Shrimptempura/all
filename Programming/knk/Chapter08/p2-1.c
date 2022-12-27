/* Checks number for repeated digits */

#include <stdbool.h>    /* C99 only */
#include <stdio.h>  /* 역자: 헤더파일은 알파벳 순서로 추가해주는 것이 좋다 */

int main(void) 
{
    int digit_seen[10] = {0, };
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) 
    {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }

    printf("Digit : \t");
    for (digit = 0; digit < 10; digit++)
        printf("%d ", digit);
    printf("\n");

    printf("Occurrences : \t");
    for (digit = 0; digit < 10; digit++)
        printf("%d ", digit_seen[digit]);
    printf("\n");

    return 0;
}