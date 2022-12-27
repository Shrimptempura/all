// #include <stdio.h>
// #define MAX(a,b,c) (((a)>(b)) ? ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)))

// int main(void)
// {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);

//     printf("최소값은 %d입니다.\n", MAX(a, b, c));

//     return 0;
// }

#include <stdio.h> 
#define MIN(x, y) (x) < (y) ? (x) : (y) 
#define GET_MIN(x, y, z) (MIN(x, y)) < (z) ? (MIN(x, y)) : (z) 
int main(void) 
{ 
    int x, y, z, result; 

    printf("3개의 정수를 입력하시오: "); 
    scanf("%d %d %d", &x, &y, &z); 
    result = GET_MIN(x, y, z); 
    printf("최소값은 %d입니다.\n", result); 
    
    return 0; 
}