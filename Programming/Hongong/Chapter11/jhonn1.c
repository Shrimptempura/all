#include <stdio.h>

int main(void)
{
    int a, b;
    printf("전화번호 입력해! [(xxx) xxx-xxxx]\n");
    scanf("(%d)%d", &a, &b);
    printf("너가 입력한 번호: %d. %d\n", a, b);

    return 0;
}

//내가 입력한거 : (404) 123-1234
// 출력한거 404.123.1234