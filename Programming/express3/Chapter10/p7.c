// 1부터 10까지의 정수에 대하여 제곱값과 세제곱값을 계산하여 출력하는 프로그램.
// 10 * 3 크기의 2차원 배열을 만들고, 첫 번째 열에는 정수를, 두 번째 열에는 제곱값을
// 세 번째 열에는 세제곱값을 저장하라, 추가로 사용자에게 세제곱값을 입력하도록 하고
// 이 세제곱값을 배열에서 찾아서 그것의 세제곱근을 출력하도록 하여 보라
#include <stdio.h>

int main(void)
{
    int scores[3][10];
    int i, j, check = 0, num;


    for(j = 1; j <= 10; j++)
    {
        scores[0][j] = j;       // 1째줄 1~10 대입
        scores[1][j] = j * j;
        scores[2][j] = j * j * j;
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("정수를 입력하시오 : ");
    scanf("%d", &num);

    for(j = 1; j <= 10; j++)
    {
        if (scores[2][j] == num)
        {
            printf("%d의 세제곱근은 %d입니다.\n", num, scores[0][j]);
            check = 1;
        }
    }

    if (check == 0)
        printf("입력한 값의 세제곱근이 없습니다.\n");

    return 0;
}