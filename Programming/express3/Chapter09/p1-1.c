#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main(void)
{
    char op;
    int x, y;
    int i;
    int cal;


    for(i=0;i<10;i++)
    {
        printf("연산을 입력하시오: ");
        scanf("%d %c %d", &x, &op, &y);
        
        if( op == '+' )
        //printf("연산 결과: %d \n", add(x, y));
        cal = add(x, y);

        else if( op == '-' )
        //printf("연산 결과: %d \n", sub(x, y));
        cal = sub(x, y);

        else if( op == '*' )
        //printf("연산 결과: %d \n", mul(x, y));
        cal = mul(x, y);

        else if( op == '/' )
        //printf("연산 결과: %d \n", div(x, y));
        cal = div(x, y);

        else 
        printf("지원되지 않는 연산자입니다. \n");

        printf("연산 결과 : %d \n", cal);
    }
    return 0;
}

int add(int x, int y)
{
    static int count;
    count++;
    printf("덧셈은 총 %d번 실행되었습니다.\n", count);
    return (x+y);
}

int sub(int x, int y) 
{
    static int count;
    count++;
    printf("뺄셈은 총 %d번 실행되었습니다.\n", count);
    return (x-y);
}

int mul(int x, int y) 
{
    static int count;
    count++;
    printf("곱셈은 총 %d번 실행되었습니다.\n", count);
    return (x*y);
}

int div(int x, int y)
{
    static int count;
    count++;
    printf("나눗셈은 총 %d번 실행되었습니다.\n", count);
    return (x/y);
}