#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 10
#define COL 10

int main(void)
{
    char ary[ROW][COL];
    int i, j, walk, k;
    char ch = 65;

    srand((unsigned)time(NULL));
// ary[ROW][COL] '.' 으로 초기화;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
            ary[i][j] = '.';
    }
    i = 0;
    j = 0;

    while (ch <= 90)
    {
        if (((i-1) < 0 || ary[i-1][j] != '.') && ((i+1) > 9 || ary[i+1][j] != '.') &&
            ((j-1) < 0 || ary[i][j-1] != '.') && ((j+1) > 9 || ary[i][j+1] != '.'))
            break;

        walk = rand() % 4;
        if (walk == 0)  {       //up
            if ((i - 1) < 0 || ary[i - 1][j] != '.')
                continue;
            i -= 1;
            ary[i][j] = ch;
            ch++;
        }
        else if (walk == 1)  {  //down
            if ((i+1) < 0 || ary[i+1][j] != '.')
                continue;
            i += 1;
            ary[i][j] = ch;
            ch++;
        }
        else if (walk == 2)  {  //left
            if ((j-1) < 0 || ary[i][j-1] != '.')
                continue;
            j -= 1;
            ary[i][j] = ch;
            ch++;
        }
        else if (walk == 3)  {  //right
            if ((j+1) < 0 || ary[i][j+1] != '.')
                continue;
            j += 1;
            ary[i][j] = ch;
            ch++;
        }
    }

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
            printf("%2c", ary[i][j]);
        printf("\n");
    }

    return 0;
}