#include <stdio.h>

int main(void) {
    int num;
    int sum = 0;

    while (1)
    {
        printf("정수 입력(0: 종료):");
        scanf("%d", &num);

        if (num == 0)
            break;
        else if (num >= 0 && num < 10)
            sum += num;
    }

    printf("sum = %d\n", sum);

    return 0;
}