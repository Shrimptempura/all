#include <stdio.h>
#define SIZE 10

int main(void)
{
    int seats[SIZE] = {0};
    int seat, i;
    char ch;


    while(1)
    {   
        printf("좌석을 예약하시겠습니까?(y 또는 n) ");
        ch = getchar();

        if (ch == 'n')
            break;

        printf("-------------------------------\n");
        printf("1  2  3  4  5  6  7  8  9  10\n");
        printf("-------------------------------\n");

        for (i = 0; i < SIZE; i++)
            printf("%d  ", seats[i]);
        printf("\n");

        getchar();
        printf("몇번째 좌석을 예약하시겠습니까?\n");
        scanf("%d", &seat);

        if (seats[seat - 1] == 0)
        {
            seats[seat - 1] = 1;
            printf("예약되었습니다.\n");
        }
        else
            printf("이미 예약된 자리입니다.\n");
    }

    return 0;
}