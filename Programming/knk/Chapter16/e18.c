/*
(a) Each square of a chessboard can hold one piece -- 
    a pawn, knight, bishop, rook, queen or king -- or it may be empty. 
    Each piece is either black or white. Define two enumerated types: Piece, 
    which has seven possible values (one of which is "empty"), and Color, which has two.

(b) Using the types from part (a), define a structure type named Square that can store 
    both the type of a piece and its color.

(c) Using the Square type from part (b), declare an 8 x 8 array named board that 
    can store the entire contents of a chessboard.

(d) Add an initializer to the declaration in part (c) so that board's initial value corresponds
    to the usual arrangement of pieces at the start of a chess game. 
    A square that's not occupied by a piece should have an "empty" piece value and 
    the color black.
*/


#include <stdio.h>

typedef enum {PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING, EMPTY} Piece;
typedef enum {BLACK, WHITE} Color;

typedef struct {
	Piece p;
	Color c;
} Square;

Square board[8][8] =
	{{{ROOK, WHITE}, {KNIGHT, WHITE}, {BISHOP, WHITE}, {KING, WHITE},
    {QUEEN, WHITE}, {BISHOP, WHITE}, {KNIGHT, WHITE}, {ROOK, WHITE}},
    {{PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE},
    {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}},
    {{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
    {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}},
    {{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
    {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}},
    {{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
    {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}},
    {{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
    {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}},
    {{PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK},
    {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}},
    {{ROOK, BLACK}, {KNIGHT, BLACK}, {BISHOP, BLACK}, {KING, BLACK},
    {QUEEN, BLACK}, {BISHOP, BLACK}, {KNIGHT, BLACK}, {ROOK, BLACK}}};

int main(void)
{
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			printf("%d/%d ", board[i][j].p, board[i][j].c);
		}
		printf("\n");
	}
	
	return 0;
}