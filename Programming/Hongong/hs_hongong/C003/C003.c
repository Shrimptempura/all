#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void transpose(int a[][3], int b[][3]);
void print_matrix(int ary[][3]);
void print_all(int a[][3], int b[][3]);

int main(void)
{
    int i, j;
    int a[3][3] = {0, };
    int b[3][3] = {0, };
    srand((unsigned int)time(NULL));

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            a[i][j] = (rand() % 10);
    }
    print_all(a, b);

    return 0;
}

void transpose(int a[][3], int b[][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            b[j][i] = a[i][j];
    }
}

void print_matrix(int ary[][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", ary[i][j]);
        printf("\n");
    }
    printf("\n");
}

void print_all(int a[][3], int b[][3])
{
    printf("Original\n");
    print_matrix(a);
    transpose(a, b);
    printf("Transpose\n");
    print_matrix(b);
}