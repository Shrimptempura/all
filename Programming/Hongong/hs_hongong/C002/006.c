#include <stdio.h>

int main(void)
{
    int ary[5] = {0, };
    int sum = 0;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("정수 입력 : ");
        scanf("%d", &ary[i]);
        sum += ary[i];
    }
    
    printf("평균 입력 : %.1lf\n", (double)sum / 5);

    return 0;
}

// #include <stdio.h>

// int main(void)
// {
//     int ary[5] = {0, };
//     int sum = 0;
//     int i;

//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &ary[i]);
//         sum += ary[i];
//     }

//     for (i = 0; i < 5; i++)
//         printf("정수 입력 : %d\n", ary[i]);
    
//     printf("평균 입력 : %.1lf\n", (double)sum / 5);

//     return 0;
// }