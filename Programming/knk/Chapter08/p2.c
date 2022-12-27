// 병신같이 만든거, 여러가지 문제, 여기선 occur를 0초기화로 출력시
// 10자리가 모자라면 문제 등등이 남음
// 애초에 repdigit.c modify 문제라 정확히 이해하고 넘어가서
// 그 문제를 '수정' 해야 하는데 내 마음대로 어떤건 쓰고 어떤건 안쓰다가
// 코드가 꼬임,             p2-1.c 를 보자
#include <stdio.h>

int main(void)
{
    int num[10];
    int occur[10] = {0, };
    int i, j = 0, cnt = 0;

    printf("Enter a number : ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] == '\0')
        {
            break;
        }
    }

    printf("Digit : \t");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (num[j] == i)
                occur[i]++;
        }
    }    
    printf("\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", occur[i]);
    }
    printf("\n");

    return 0;
}