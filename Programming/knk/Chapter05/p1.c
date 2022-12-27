#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, count;

    printf("Enter a number : ");
    scanf("%d", &num);

    if (0 <= num && num <= 9)
        count = 1;
    else if (10 <= num && num <= 99)
        count = 2;
    else if (100 <= num && num <= 999)
        count = 3;
    else
    {
        printf("Wrong number, Enter a number with 0 ~ 999\n");
        exit(EXIT_FAILURE);
    }

    printf("The number %d has %d digits\n", num, count);

    return 0;
}