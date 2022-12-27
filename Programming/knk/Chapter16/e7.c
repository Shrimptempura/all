/*
Assume that the fraction structure contains two members: numerator and denominator 
(both of type int). Write functions that perform the following operations on fractions:

(a) Reduce the fraction f to lowest terms. Hint: To reduce a fraction to lowest terms, 
    first compute the greates common divison (GCD) of the numerator and denominator. 
    Then devide both the numerator and denominator by the GCD.
(b) Add the fractions f1 and f2.
(c) Subtract the fraction f2 from the fraction f1.
(d) Multiply the fractions f1 and f2.
(e) Divide the fraction f1 by the fraction f2.

The fractions f, f1 and f2 will be arguments of type struct fraction: 
function will return a value of type struct fraction. The fractions returned by 
the functions in parts (b)-(e) should be reduced to lowest terms. 
Hint: You may use the function from part (a) to help write the functions in parts (b)-(e).
*/
#include <stdio.h>
#include <stdio.h>

struct fraction {
	int numerator, denominator;
};

int gcd(int m, int n);
struct fraction reduce(struct fraction f);
struct fraction add(struct fraction f1, struct fraction f2);
struct fraction subtract(struct fraction f1, struct fraction f2);
struct fraction multiply(struct fraction f1, struct fraction f2);
struct fraction divide(struct fraction f1, struct fraction f2);

int main(void)
{
	struct fraction f1, f2, f;
	
	f1.numerator = 5;
	f1.denominator = 15;
	
	f2.numerator = 17;
	f2.denominator = 34;
	
	f = reduce(f1);
	printf("%d/%d\n", f.numerator, f.denominator);
	
	f = add(f1, f2);
	printf("%d/%d\n", f.numerator, f.denominator);
	
	f = subtract(f1, f2);
	printf("%d/%d\n", f.numerator, f.denominator);
	
	f = multiply(f1, f2);
	printf("%d/%d\n", f.numerator, f.denominator);
	
	f = divide(f1, f2);
	printf("%d/%d\n", f.numerator, f.denominator);
	
	return 0;
}

int gcd(int m, int n)
{
	int tmp;
	
	while (m % n != 0)
	{
		tmp = n;
		n = m % n;
		m = tmp;
	}
	return n;
}

struct fraction reduce(struct fraction f)
{
	int tmp_gcd;
	struct fraction tmp_fraction;
	
	tmp_gcd = gcd(f.numerator, f.denominator);
	
	tmp_fraction.numerator = f.numerator / tmp_gcd;
	tmp_fraction.denominator = f.denominator / tmp_gcd;
	
	return tmp_fraction;
}

struct fraction add(struct fraction f1, struct fraction f2)
{
	struct fraction tmp_fraction;
	
	tmp_fraction.numerator = f1.numerator * f2.denominator +
							 f2.numerator * f1.denominator;
	tmp_fraction.denominator = f1.denominator * f2.denominator;
	tmp_fraction = reduce(tmp_fraction);
	
	return tmp_fraction;
}

struct fraction subtract(struct fraction f1, struct fraction f2)
{
	struct fraction tmp_fraction;
	
	tmp_fraction.numerator = f1.numerator * f2.denominator -
							 f2.numerator * f1.denominator;
	tmp_fraction.denominator = f1.denominator * f2.denominator;
	tmp_fraction = reduce(tmp_fraction);
	
	return tmp_fraction;
}

struct fraction multiply(struct fraction f1, struct fraction f2)
{
	struct fraction tmp_fraction;
	
	tmp_fraction.numerator = f1.numerator * f2.numerator;
	tmp_fraction.denominator = f1.denominator * f2.denominator;
	tmp_fraction = reduce(tmp_fraction);
	
	return tmp_fraction;
}

struct fraction divide(struct fraction f1, struct fraction f2)
{
	struct fraction tmp_fraction;
	
	tmp_fraction.numerator = f1.numerator * f2.denominator;
	tmp_fraction.denominator = f1.denominator * f2.numerator;
	tmp_fraction = reduce(tmp_fraction);
	
	return tmp_fraction;
}