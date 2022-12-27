/*
<하노이 탑>
막대 from에 쌓여있는 n개의 원판을 막대 tmp를 사용하여 to로 옮긴다.
void hanoi_tower(int n, char from, char tmp, char to)
{
    if (n == 1) {
        from에 있는 한 개의 원판을 to로 옮긴다.
    }
    else {
        1) from의 맨 밑의 원판을 제외한 나머지 원판들을 tmp로 옮긴다.
        2) from에 있는 한 개의 원 판을 to로 옮긴다.
        3) tmp의 원판들을 to로 옮긴다.
    }
}
*/

// 하노이의 탑 문제 프로그램
#include <stdio.h>
void hannoi_tower(int n, char from, char tmp, char to)
{
    if (n == 1) printf("원판 1을 %c에서 %c로 옮긴다.\n", from, to);
    else {
        hannoi_tower(n - 1, from, to, tmp);
        printf("원판 %d을 %c에서 %c으로 옮긴다.\n", n, from, to);
        hannoi_tower(n - 1, tmp, from, to);
    }
}

int main(void)
{
    hannoi_tower(4, 'A', 'B', 'C');
    return 0;
}