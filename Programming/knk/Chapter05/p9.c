#include <stdio.h>

int main(void)
{
    int first_m, first_d, first_y;
    int second_m, second_d, second_y;
    int earlier;

    printf("Enter first date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &first_m, &first_d, &first_y);

    printf("Enter second date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &second_m, &second_d, &second_y);

    if (first_y < second_y)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", first_m, first_d, first_y,
            second_m, second_d, second_y);
    else if (second_y < first_y)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", second_m, second_d, second_y,
            first_m, first_d, first_y);
    else if (first_m < second_m)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", first_m, first_d, first_y,
            second_m, second_d, second_y);
    else if (second_m < first_m)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", second_m, second_d, second_y,
            first_m, first_d, first_y);
    else if (first_d < second_d)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", first_m, first_d, first_y,
            second_m, second_d, second_y);
    else if (second_d < first_d)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", second_m, second_d, second_y,
            first_m, first_d, first_y);
    else
        printf("correct math 2 days\n");

    return 0;
}