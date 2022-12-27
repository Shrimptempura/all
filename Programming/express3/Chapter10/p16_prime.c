#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int top_value = 100;
    int count = top_value - 1;
    int my_array[101];
    int i, prime, multiple;

    for (i = 2; i <= 100; ++i) 
        my_array[i] = 1;
    for (prime = 2; prime <= 100; ++prime)
    {
        if (my_array[prime])
            for (multiple = 2 * prime; multiple <= top_value; multiple += prime)
                my_array[multiple] = 0;
    }
    
    for (i = 2; i <= top_value; ++i)
    {
        if (my_array[i])
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}