#include <stdio.h>

int main(void)
{
    double num;
    double largest = 0.0;

    do {
        printf("Enter a number : ");
        scanf("%lf", &num);
        // getchar();

        if (largest < num)
            largest = num;
    } while (num != 0);

    printf("The largest number entered was %.2lf\n", largest);

    return 0;
}