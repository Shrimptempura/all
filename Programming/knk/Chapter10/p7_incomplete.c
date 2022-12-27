#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_DIGITS 10

// 0 ~ 9
const int segement[MAX_DIGITS][7] = {{1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0},
                                {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1},
                                {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1},
                                {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 1, 0},
                                {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}};
char digits[4][MAX_DIGITS];

void clear_digit_array(void);
void process_digit(int digit, int position);
void print_digit_array(void);

int main(void)
{
    int i, j, position;
    int digit[10];

    clear_digit_array();
    printf("Enter a number : ");
    


    return 0;
}

void clear_digit_array(void)
{
    int i = 0, j = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < MAX_DIGITS * 4; j++) {
            digits[i][j] = ' ';
        }
    }
}

void print_digit_array(void)
{
    int i = 0, j = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < MAX_DIGITS * 4; j++) {
            printf("%c", digits[i][j]);
        }
        printf("\n");
    }
}

void process_digit(int digit, int position)
{
    ;
}