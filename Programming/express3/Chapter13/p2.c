// 은행계좌 구조체 account 선언, 계좌는 계좌번호, 이름, 잔액...
#include <stdio.h>

struct account {
    int number;
    char name[20];
    int balance;
};

int main(void)
{
    struct account bank = {1, "홍길동", 100000};

    printf("{%d, %s, %d}\n", bank.number, bank.name, bank.balance);

    return 0;
}