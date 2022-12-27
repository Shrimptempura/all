// random walk 배열을 이용해 프로그래밍하기, n * m 타일의, 임의의(랜덤) 위치 선택하여
// 여기저기 걸어다닌다. 주의 8개 타일로 걸어가는 확률은 동일
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 20
#define COL 20

void random_walk(void);
void starting_walk(void);

int main(void)
{
    srand((unsigned)time(NULL));
    starting_walk();
    random_walk();

    return 0;
}

void random_walk(void)
{
    int i, j, dir, count;
    char tile[ROW][COL];
    count = 0;

    i = rand() % 20;
    j = rand() % 20;       
    tile[i][j] = 1;

    while (count < 7)
    {
        dir = rand() % 8;
        if(dir == 0)
        {
            if ((tile[i - 1][j]) || (i < 1)) // tile[i - 1][j] == 1로도 가능;
                ;
            else
            {
                i--; count++;
            }
        }
        else if (dir == 1)
        {
            if ((tile[i - 1][j + 1]) || (i < 1) || (j > 18))
                ;
            else
            {
                i--; j++; count++;
            }
        }
        else if (dir == 2)
        {
            if ((tile[i][j + 1]) || (j > 18))
                ;
            else
            {
                j++; count++;
            }
        }
        else if (dir == 3)
        {
            if ((tile[i + 1][j + 1]) || (i > 18) || (j > 18))
                ;
            else
            {
                i++; j++; count++;
            }
        }
        else if (dir == 4)
        {
            if ((tile[i + 1][j]) || (i > 18))
                ;
            else
            {
                i++; count++;
            }
        }
        else if (dir == 5)
        {
            if ((tile[i + 1][j - 1]) || (i > 18) || (j < 1))
                ;
            else
            {
                i++; j--; count++;
            }
        }
        else if (dir == 6)
        {
            if ((tile[i][j - 1]) || (j < 1))
                ;
            else
            {
                j--; count++;
            }
        }
        else if (dir == 7)
        {
            if ((tile[i - 1][j - 1]) || (i < 1) || (j < 1))
                ;
            else
            {
                i--; j--; count++;
            }
        }
        tile[i][j] = 1;
    }

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (tile[i][j] == 0)
                printf("%c ", '.');
            else if (tile[i][j] == 1)
                printf("%c ", '*');
        }
        printf("\n");
    }
}

void starting_walk(void)
{
    int i, j;
    char tile[ROW][COL];

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            tile[i][j] = 0;
        }
    }
}