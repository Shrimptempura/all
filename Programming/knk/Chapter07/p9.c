#include <stdio.h>
#include <string.h>

int main(void)
{
    int hour, min;
    char divd[4];

    printf("Enter a 12-hour time : ");
    scanf("%d:%d %s", &hour, &min, divd);

    if (strcmp(divd, "PM"))
        printf("Equivalent 24-hour time : %d:%.2d\n", hour, min);
    else
        printf("Equivalent 24-hour time : %d:%.2d\n", hour + 12, min);

    return 0;
}