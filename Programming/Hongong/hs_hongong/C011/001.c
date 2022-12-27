#include <stdio.h>

void input(int *pa, int *pb);
void swap();
void output(int pa, int pb);

int a, b;

int main(void)
{
    input(&a, &b);
    swap();
    output(a, b);
}

void input(int *pa, int *pb)
{
    printf("두 정수 입력 : ");
    scanf("%d %d", &a, &b);
}

void swap()
{
    int c;

    c = a;
    a = b;
    b = c;
}

void output(int pa, int pb)
{
    printf("두 정수 출력 : %d, %d\n", pa, pb);
}