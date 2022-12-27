// 크래커의 가격(price)과 열량(calories)을 저장할 cracker 구조체 선언하고
// 만든 구조체로 변수를 선언하고 가격과 열량을 키보드로 입력한 후에 화면으로 출력해라
#include <stdio.h>

struct craker
{
    int price;
    int calores;
};

int main(void)
{
    struct craker output;

    printf("바사삭의 가격과 열량을 입력하세요 : ");
    scanf("%d%d", &output.price, &output.calores);
    // %d는 숫자만 받으므로 %d %d, space를 안넣어도 입력할때 20sp30 넣어도 숫자만 받는다.

    printf("바사삭의 가격 : %d원\n", output.price);
    printf("바사삭의 열량 : %dkcal\n", output.calores);

    return 0;
}