#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}                               \

/*
(a)
long long_max(long x, long y) {
    return x > y ? x : y;
}

(b)
why doesn't work for basic types such as UNSIGNED LONG.
    = Types including a space character in their name will not work for 
this function creation because of the ## operator in the macro definition, 
illegally creating a function unsigned long unsigned long_max().

(c)
A solution to this issue would be to define an equivalent type 
which has no spaces in its name, such as
    = typedef unsigned long u_long;

*/