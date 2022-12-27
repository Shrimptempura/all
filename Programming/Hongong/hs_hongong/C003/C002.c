#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_numbers(int *cnt);

int main(void)
{
    int i = 0;
    int check;
    int ary[1000] = {0, };
    int cnt[10] = {0, };

    while (i < 1000)
    {
        ary[i] = rand() % 10;
        check = ary[i];
        cnt[check] += 1;
        i++;
    }
    print_numbers(cnt);

    return 0;
}

void print_numbers(int *cnt)
{
    int i;

    printf("number: ");
    for (i = 0; i < 10; i++)
        printf("%5d ", i);
    printf("\n");

    printf("count:  ");
    for (i = 0; i < 10; i++)
        printf("%5d ", cnt[i]);
    printf("\n");
}