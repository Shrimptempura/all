#include <stdio.h>
// #define DISP(f,x) (sqrt, 3.0)
// should expand into
// printf("sqrt(%g) = %g\n", 3.0, sqrt(3.0));
#define DISP(f,x) (printf((#f) "(%g) = %g\n", (x), (f(x))))
#define DISP2(f,x,y) (printf((#f) "(%g, %g) = %g\n", (x), (y), (f((x),(y)))))