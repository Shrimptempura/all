// 사용자로부터 1부터 50사이의 숫자를 입력받아서 숫자만큼 별표 출력, 막대는 가로 그래프
#include <stdio.h>

int main(void)
{
    int height, i;
    
    while (height != -1)
    {
        printf("막대의 높이(종료 : -1 ): ");
        scanf("%d", &height);

        if (height < 1 || height > 50)
            continue;

        for (i = 1; i <= height; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}