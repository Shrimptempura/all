#include <stdio.h>

int main(void) {

    int num;
    int sum = 0;

    do {
        printf("정수 입력(0: 종료) : ");
        scanf("%d", &num);
        sum += num;
    } while (num != -1);

    sum -= num;
    printf("sum = %d\n", sum);

    return 0;
}