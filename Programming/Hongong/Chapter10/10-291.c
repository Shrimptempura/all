// month[0]은 1월이며, 첨자가 순차적으로 증가 할때 월도 증가한다.
// month 배열의 값을 한 줄에 5개씩 출력하는 함수를 만들어봐라
#include <stdio.h>
void print_month(int *mp);

int main(void)
{   
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    print_month(month);
    return 0;
} 


void print_month(int *mp)
{
    int i;
    for (i = 0; i < 12; i++)
    {
        printf("%5d", mp[i]);
        if ((i + 1) % 5 == 0) printf("\n");
    }
}