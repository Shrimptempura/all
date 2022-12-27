// 재고 관리 시스템, 상품마다 번호가 붙어 있고, 상품 번호를 사용자가 입력하면 물품이
// 어디 있는지 알려주는 번호 출력, 상품 번호는 1부터 10까지 하고 장소를 나타내는 번호는
// 1부터 5까지 가정, 1차원 배열 사용하여 미리 상품 번호마다 장소를 저장하고, 사용자로부터
// 상품번호를 받아서 장소를 출력한다.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    srand((unsigned)time(NULL));
    int i, num;
    int product_area[10] = {0, };

    for (i = 0; i < 10; i++)
    {
        product_area[i] = rand() % 5 + 1;
    }

    printf("상품 번호를 입력하시오 " );
    scanf("%d", &num);

    printf("상품 번호 %d의 위치는 %d입니다.\n", num, product_area[i - 1]);

    return 0;
}