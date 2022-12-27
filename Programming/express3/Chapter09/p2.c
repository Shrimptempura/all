// 주사위를 던져서 각각의 면이 몇번 나왔는지 출력하는 프로그램 작성, 주사위의 면은
// 난수로 생성, 주사위를 던지는 함수 get_dice_face()만들고 이 함수 안에서 각각의 면이
// 나올 때마다 그 횟수를 정적 지역 변수를 이용하여 기억하게 하라,
// get_dice_face() 호출 횟수가 100이 되면 각 면의 횟수를 출력한다.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int count1;
int count2;
int count3;
int count4;
int count5;
int count6;

void get_dice_face(void);

int main(void)
{
    srand((unsigned)time(NULL));
    int i;

    for (i = 0; i < 100; i++)
    {
        get_dice_face();
    }

    printf("1 -> %d\n", count1);
    printf("2 -> %d\n", count2);
    printf("3 -> %d\n", count3);
    printf("4 -> %d\n", count4);
    printf("5 -> %d\n", count5);
    printf("6 -> %d\n", count6);
    
    return 0;
}

void get_dice_face(void)
{
    int r = rand() % 6 + 1;

    if (r == 1)
        ++count1;

    else if (r == 2)
        ++count2;
    
    else if (r == 3)
        ++count3;

    else if (r == 4)
        ++count4;

    else if (r == 5)
        ++count5;

    else if (r == 6)
        ++count6;
}