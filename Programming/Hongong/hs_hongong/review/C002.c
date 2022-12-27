#include <stdio.h>

int main(void) 
{
    int num = 0;
    int cnt = 0;
    int sum = 0;

    while (sum < 10000)
    {
        num++;
        sum += num;
        cnt++;
    }
    printf("1부터 %d까지의 합은 %d입니다.\n", cnt - 1, sum - num);

    return 0;
}

// #include <stdio.h>

// int main(void) 
// {
//     int num = 0;
//     int cnt = 1;

//     while (1)
//     {
//         num = cnt + (num + 1);
//         if (num > 10000)
//         {
//             printf("1부터 %d까지의 합은 %d입니다.\n", cnt, num - cnt);
//             break;
//         }
//         cnt++;
//     }

//     return 0;
// }
