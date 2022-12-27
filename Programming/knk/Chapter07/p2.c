/* Prints a table of squares using a for statement */
// p2-1.c 가 더 정확하다 볼 수 있음 해석차이..
// section 6.3의 square2.c를 수정하여 24줄마다 엔터를 치지않으면 출력하지 못하게 수정

#include <stdio.h>

int main(void)
{
    int i, n;
    char ch;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar();

    for (i = 1; i <= n; ++i) 
    {
        printf("%10d%10d\n", i, i * i);
        if (i % 24 == 0)
        {
            printf("Press Enter to continue..\n");
            while ((getchar() == '\n') && i <= n)
            {
                printf("%10d%10d", i, i * i);
                ++i;
            }
            if (ch != '\n')         // ch 그냥 쓰레기값 아다리 맞은듯?
                break;
        }
    }

    printf("qwe %d\n", ch);
    printf("qqq %c\n", ch);

    return 0;
}