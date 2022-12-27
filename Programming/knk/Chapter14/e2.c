// macro NELEMS(a) that computes the number of elements in a one-dimensional array a.
#include <stdio.h>

#define NELEMS(a) (int) (sizeof(a) / sizeof(a[0]))
// #define NELEMS(a) (sizeof(a) / sizeof(a[0]))
int main(void)
{
    int arr[50] = {0};
    
    printf("%d\n", NELEMS(arr));
    return 0;
}
