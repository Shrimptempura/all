// 놀이 공원에 키가 140cm이상이고 나이가 10살이사잉어야 갈수있다.
#include <stdio.h>

int main(void)
{
    int cm, age;

    printf("키를 입력하시오 : ");
    scanf("%d", &cm);

    printf("나이를 입력하시오 : ");
    scanf("%d", &age);

    if (age >= 10 && cm >= 140)
        printf("타도 좋습니다.\n");
    else
        printf("죄송합니다.\n");

    return 0;
}