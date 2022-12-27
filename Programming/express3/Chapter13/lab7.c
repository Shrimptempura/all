#include <stdio.h>

struct product {
    int number;
    char name[20];
    double price;
};

int main(void)
{
    struct product list[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("번호를 입력하세요");
        scanf("%d", &list[i].number);
        printf("이름을 입력하세요");
        scanf("%s", list[i].name);
        printf("가격을 입력하세요");
        scanf("%lf", &list[i].price);
    }

    for (i = 0; i < 5; i++)
    {
        printf("번호 : %d, 이름 : %s, 가격 : %lf", 
                list[i].number, list[i].name, list[i].price);
    }

    return 0;
}