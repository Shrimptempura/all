// 피보나치 수열(앞의 2개의 원소를 합하여 뒤의 원소의 합)
#include <stdio.h>  // 0, 1, 1, 2, 3, 5, 8...

int main(void)
{
    int i, num;
    int a = 0, b = 1, c;

    printf("몇번째 항까지 구할까요? : ");
    scanf("%d", &num);

    for (i = 0; i < num ; i++)
    {
        c = a + b;
        printf("%d ", a);
        a = b;
        b = c;
    }

    return 0;
}