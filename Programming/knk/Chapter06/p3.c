#include <stdio.h>

int gcd(int a, int b);

int main(void)
{
    int molecule, denominator, gcd_num;

    printf("Enter a fraction : ");
    scanf("%d/%d", &molecule, &denominator);

    gcd_num = gcd(molecule, denominator);
    molecule /= gcd_num;
    denominator /= gcd_num;

    printf("In lowest terms : %d/%d\n", molecule, denominator);

    return 0;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}