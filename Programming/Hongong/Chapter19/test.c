#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_spuare(int n, char magic_square[n][n]);

int main(void)
{
    int square;

    printf("This program creates a magic square of a specified size\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &square);
    char magic[square][square];

    create_magic_square(square, magic);
    print_magic_spuare(square, magic);

    return (0);
}

void create_magic_square(int n, char magic_square[n][n])
{
    int i = 0, j = n / 2;
    int num = 1;

    while(num <= (n * n))
    {
        magic_square[i][j] = num;
        i--;
        j++;

        if (num % n == 0)
        {
            i += 2;
            j--;
        }
        if (i < 0)
        {
            i += n;
        }
        
        if (j >= n)
        {
            j -= n;
        }

        num++;
    }
}

void print_magic_spuare(int n, char magic_square[n][n])
{
    int i, j;

    i = 0;
    while(i < n)
    {
        j = 0;
        while(j < n)
        {
            printf("%4d", magic_square[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}