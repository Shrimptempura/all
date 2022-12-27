#include <stdio.h>

int main(void)
{
    int year, month, day, time, year2, month2, day2;
    int earliest = 525600;
    
    while (1)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        
        time = year * 365 + month * 30 + day;
        if (time == 0)
            break;

        if (time < earliest)
        {
            earliest = time;
            month2 = month;
            day2 = day;
            year2 = year;
        }
    }

    printf("%d/%d/%.2d is earliest date\n", month2, day2, year2);

    return 0;
}