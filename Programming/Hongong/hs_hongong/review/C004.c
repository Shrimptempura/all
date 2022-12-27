#include <stdio.h>

int main(void) 
{
    int income, tax;

    printf("소득을 입력하시오(만원) : ");
    scanf("%d", &income);

    if (income > 1000)
    {
        tax = income * 0.1;
        printf("소득세는 %d만원입니다.\n", tax);
    }

    else 
    {
        tax = income * 0.08;
        printf("소득세는 %d만원입니다.\n", tax);
    }

    return 0;
}