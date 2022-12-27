/*
미로 탐색 프로그램
maze_search():

스택 s과 출구의 위치 x, 현재 생쥐의 위치를 초기화
while (현재의 위치가 출구가 아니면) do
    현재위치를 방문한 것으로 표기
    if (현재위치의 위, 아래, 왼쪽, 오른쪽 위치가 아직 방문되지 않았고, 갈수 있으면)
        then 그 위치들을 스택에 push
    if (is_empty(s))
        then 실패
    else 스택에서 하나의 위치를 꺼내어 현재 위치로 만든다;
성공;
*/

// 미로탐색 프로그램
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAZE_SIZE 6

// 스택 코드 추가
typedef struct {
    short r;
    short c;
} element;
// 스택 코드 끝

element here = {1, 0}, entry = {1, 0};

char maze[MAZE_SIZE][MAZE_SIZE] = {
    {'1', '1', '1', '1', '1', '1'},
    {'e', '0', '1', '0', '0', '1'},
    {'1', '0', '0', '0', '1', '1'},
    {'1', '0', '1', '0', '0', 'x'},
    {'1', '1', '1', '1', '1', '1'},
};

void push_loc(StackType *s, int r, int c)
{
    if (r < 0 || c < 0) return;
    if (maze[r][c] != '1' && maze[r][c] != '.') {
        element tmp;
        tmp.r = r;
        tmp.c = c;
        push(s, tmp);
    }
}

void maze_print(char maze[MAZE_SIZE][MAZE_SIZE])
{
    printf("\n");
    for (int r = 0; r < MAZE_SIZE; r++) {
        for (int c = 0; c < MAZE_SIZE; c++) {
            printf("%c", maze[r][c]);
        }
        printf("\n");
    }
}

int main(void)
{
    int r, c;
    StackType s;

    init_stack(&s);
    here = entry;
    while (maze[here.r][here.c] != 'x') {
        r = here.r;
        c = here.c;
        maze[r][c] = '.';
        maze_print(maze);
        push_loc(&s, r - 1, c);
        push_loc(&s, r + 1, c);
        push_loc(&s, r, c - 1);
        push_loc(&s, r, c + 1);
        if (is_empty(&s)) {
            printf("실패\n");
            return;
        }
        else
            here = pop(&s);
    }
    printf("성공\n");
    return 0;
}