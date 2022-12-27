#include <stdio.h>

int main(void)
{
    int num;
    int i;
    
    printf("enter a number : ");
    scanf("%d", &num);
    
    for (i = 2; i * i <= num; i += 2)   // i++ -> i = i + 1;
        printf("%d\n", i * i);

    return 0;
}