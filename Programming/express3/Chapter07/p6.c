#include <stdio.h>

int main(void)
{
    char ch, c;
    int x, y, res;

    printf("==================\n");
    printf("A---- Add\n");
    printf("S---- Subtract\n");
    printf("D---- Divide\n");
    printf("M---- Multiply\n");
    printf("Q---- Quit\n");
    printf("==================\n");

    do
    {
        printf("연산을 선택하시오 : ");
        scanf("%c", &ch);

        if (ch == 'Q')
            break;

        if (ch == 'A' || ch == 'S' || ch == 'M' || ch == 'D')
        {
            printf("두수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &x, &y);

            switch(ch)
            {
                case 'A': res = x + y; break;
                case 'S': res = x - y; break;
                case 'M': res = x * y; break;
                case 'D': res = x / y; break;
                default: break;
            }
        printf("%d\n", res);
        }
        scanf("%*c");
    } while(1);
    
    return 0;
}