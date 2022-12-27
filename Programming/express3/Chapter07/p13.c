// 서로 다른 n개에서 r개를 택하여 일렬로 나열하는 방법 = 순열(permutation); nPr
// nPr = n(n - 1)(n - 2)...(n - r + 1)
#include <stdio.h>

int main(void)
{
    int num, r, i, sum = 1;

    printf("n의 값 : ");
    scanf("%d", &num);

    printf("r의 값 : ");
    scanf("%d", &r);

    for (i = num; i >= num - (r -1); i--)
    {
        sum *= i;
    }
    printf("순열의 값은 %d입니다.\n", sum);

    return 0;
}