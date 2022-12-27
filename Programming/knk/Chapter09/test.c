#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
    int sum, win = 0, lose = 0;
    int check = 1;

    while (check != false)
    {
        sum = roll_dice();
        printf("You rolled : %d\n", sum);
        if (sum == 7 || sum == 11)
        {
            printf("You win!\n");
            win++;
            check = play_game();
        }
        else if (sum == 2 || sum == 3 || sum == 12)
        {
            printf("You lose!\n");
            lose++;
            check = play_game();
        }
        else if (check == 1)
        {
            printf("Your point is %d\n", sum);
            check++;
        }
    }

    printf("Wins : %d   Losses : %d\n", win, lose);

    return 0;
}

int roll_dice(void)
{
    int dice1, dice2, sum = 0;
    srand((unsigned)time(NULL));

    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;

    sum = dice1 + dice2;

    return sum;
}

bool play_game(void)
{
    char ch;

    while (1)
    {
        ch = getchar();
        if (ch == 'y')
            return true;
        else if (ch == 'n')
            return false;
        else
            continue;
    }            
}