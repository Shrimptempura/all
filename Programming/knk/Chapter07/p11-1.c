#include <stdio.h>

int main(void)
{
    char last[16];
    char first[16];

    printf("Enter a first and last name : ");
    scanf("%s %s", first, last);

    printf("%s, %c.\n", last, first[0]);

    return 0;
}