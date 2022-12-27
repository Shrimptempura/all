#include <stdio.h> 
#define HEIGHT 10
#define WIDTH 10
#define ALIVE 1
#define DEAD 0

void print_board(int board[HEIGHT][WIDTH]) 
{
    int h, w;
    for (h = 0; h < HEIGHT; h++) 
    {
        for (w = 0; w < WIDTH; w++) 
        {
            if (board[h][w] == ALIVE) 
                printf("X");
            else 
                printf("-");
        }
        printf("\n");
    }
    printf("\n");
}

void clear_board(int board[HEIGHT][WIDTH]) 
{
    int h, w;

    for (h = 0; h < HEIGHT; h++) 
    {
        for (w = 0; w < WIDTH; w++) 
            board[h][w] = DEAD;
    }
}

int get_value(int board[HEIGHT][WIDTH], int row, int col) 
{
    if (row < 0 || row >= HEIGHT 
    || col < 0 || col >= WIDTH 
    || board[row][col] != ALIVE )
        return 0;
    else 
        return 1;
}

int get_neighbor_count(int board[HEIGHT][WIDTH], int row, int col) 
{
    int neighbor = 0;

    if( row == 0 || col == 0 || row ==(HEIGHT-1) || col ==(WIDTH-1))
    {
        // 가장자리이면 표준적인 방법
        neighbor += get_value(board, row - 1, col - 1);
        neighbor += get_value(board, row - 1, col);
        neighbor += get_value(board, row - 1, col + 1);
        neighbor += get_value(board, row, col - 1);
        neighbor += get_value(board, row, col + 1);
        neighbor += get_value(board, row + 1, col - 1);
        neighbor += get_value(board, row + 1, col);
        neighbor += get_value(board, row + 1, col + 1);
    }
    else 
    {
        // 내부이면 빠른 방법
        int *p = &(board[row][col]);
        neighbor += *(p-WIDTH-1);
        neighbor += *(p-WIDTH);
        neighbor += *(p-WIDTH+1);
        neighbor += *(p-1);
        neighbor += *(p+1);
        neighbor += *(p+WIDTH-1);
        neighbor += *(p+WIDTH);
        neighbor += *(p+WIDTH+1);
    }
    return neighbor;
}

void do_generation(int board[HEIGHT][WIDTH]) 
{
    int tmp_board[HEIGHT][WIDTH];
    int neighbor, h, w;

    for (h = 0; h < HEIGHT; h++) 
    {
        for (w = 0; w < WIDTH; w++) 
        {
            neighbor = get_neighbor_count(board, h, w);
            if (neighbor==3) 
                tmp_board[h][w] = ALIVE;
            else if (neighbor == 2 && board[h][w] == ALIVE)
                tmp_board[h][w] = ALIVE;
            else if (neighbor >= 4 && board[h][w] == ALIVE)
                tmp_board[h][w] = DEAD;
            else 
                tmp_board[h][w] = DEAD;
        }
    }

    for (h = 0; h < HEIGHT; h++) 
    {
        for (w = 0; w < WIDTH; w++)
            board[h][w] = tmp_board[h][w];
    }
}

void initialize_board(int board[HEIGHT][WIDTH]) 
{
    board[3][4] = ALIVE;
    board[3][5] = ALIVE;
    board[3][6] = ALIVE;
    board[4][6] = ALIVE;
    board[5][5] = ALIVE;
}

int main(void) 
{
    int board[HEIGHT][WIDTH];
    char user;
    int generation = 0;

    clear_board(board);
    initialize_board(board);
    print_board(board);
    
    do
    {
        do_generation(board);
        print_board(board);
        printf("generation %d\n", ++generation);
        printf("종료하려면 q, 계속하려면 m: ");
        scanf(" %c", &user);
    } while (user != 'q');

    return 0;
}