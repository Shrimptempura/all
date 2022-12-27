// 각각의 음식에 대하여 음식의 이름, 칼로리 정보를 구조체로 표시, 사용자가 하루 동안
// 먹은 음식들을 입력받아 구조체의 배열에 저장하고 하루동안 먹은 칼로리 계산 프로그램 작성
#include <stdio.h>

struct food {
    char name[100];
    int calories;
};

struct food food_ary[3];

int main(void)
{
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("음식 이름 : ");
        scanf("%s", food_ary[i].name);

        printf("칼로리 : ");
        scanf("%d", &food_ary[i].calories);
    }

    printf("총 칼로리 : %d\n", food_ary[0].calories + food_ary[1].calories + 
        food_ary[2].calories);

    return 0;
}