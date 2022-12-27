/*
(a) Show how to declare a tag named complex for a structure with two members, 
    real and imaginary, of type double.

(b) Use the complex tag to declare variables named c1, c2 and c3.

(c) Write a function named make_complex that stores its two arguments (both of type double) 
    in a complex structure, then returns the structure.

(d) Write a function named add_complex that adds the corresponding members of its arguments 
    (both complex structures), then returns the result (another complex structure).
*/

#include <stdio.h>

struct complex {
	double real;
	double imaginary;
};

struct complex make_complex(double r, double i);
struct complex add_complex(struct complex c1, struct complex c2);

int main(void)
{
	struct complex c1, c2, c3;
	
	c1 = make_complex(1.0, 2.0);
	c2 = make_complex(2.0, 3.0);
	c3 = add_complex(c1, c2);
	printf("%f %f\n", c3.real, c3.imaginary);
	
	return 0;
}

struct complex make_complex(double r, double i)
{
	struct complex num;
	num.real = r;
	num.imaginary = i;
	
	return num;
}

struct complex add_complex (struct complex c1, struct complex c2)
{
	struct complex num;
	num.real = c1.real + c2.real;
	num.imaginary = c1.imaginary + c2.imaginary;
	
	return num;
}