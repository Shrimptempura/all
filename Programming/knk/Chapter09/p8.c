#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int try(void);
int roll_dice(void);
bool play_game(void);

int main(void)
{
    int sum, win = 0, lose = 0;
    char ch, check;

    srand((unsigned)time(NULL));

    while (1)
    {
        check = play_game();
        if (check == true) { 
            win++;
        }
        else if (check == false) {
            lose++;
        }

        if (try() == 0)
            break;
    }

    printf("Wins : %d   Losses : %d\n", win, lose);

    return 0;
}

int roll_dice(void)
{
    int dice1, dice2, sum = 0;

    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;

    sum = dice1 + dice2;

    return sum;
}

bool play_game(void)
{
    int sum, point;
    int check = 1;
    char ch;

    sum = roll_dice();
    printf("You rolled : %d\n", sum);

    if (sum == 7 || sum == 11) {
        printf("You win!\n");
        return true;
    }
    else if (sum == 2 || sum == 3 || sum == 12) {
        printf("You lose!\n");
        return false;
    }
    else {
        point = sum;
        printf("Your point is %d\n", sum);
    }

    while (1)
    {
        sum = roll_dice();
        printf("You rolled : %d\n", sum);

        if (point == sum) {
            printf("You win!\n");
            return true;
        }
        else if (sum == 7) {
            printf("You lose!\n");
            return false;
        }
    }
}

int try(void)
{
    char ch;

    while (1)
    {
        printf("Play again? : ");
        ch = getchar();
        getchar();

        if (ch == 'y')
            return 1;
        else if (ch == 'n')
            return 0;
        else
            printf("Wrong Commnad enter the 'y' or 'n'\n");
    }
}