#include <stdio.h>

int main(void)
{
    int days, day_week, i, k = 1, n = 0;

    printf("Enter number of days in month : ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1 = Sun, 7 = Sat) : ");
    scanf("%d", &day_week);

    for (i = 1; i < days + day_week; i++)
    {
        if (k < day_week)
        {
            printf("%5c", ' ');
            k++;
            n++;
        }
        else
        {
            printf("%5d", (i - day_week) + 1);
            n++;
            if (n % 7 == 0)
                printf("\n");
        }
    }

    if (--i % 7 != 0)
        printf("\n");

    return 0;
}