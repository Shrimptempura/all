#include <stdio.h>

int main(void)
{
    int number;
    double price;
    int month, day, year;

    printf("Enter item number : ");
    scanf("%d", &number);
    printf("Enter unit price : ");
    scanf("%lf", &price);
    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$% 2.2lf\t\t%d/%d/%d\n", number, price, month, day, year);

    return 0;
}