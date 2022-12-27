// 벡터의 연산 배열, 2개의 벡터를 더하는 함수 vector_add() 작성 및 테스트
#include <stdio.h>

void vector_add(double x[], double y[], double z[]);
double vector_dot_prod(double x[], double y[], double z[]);

int main(void)
{
    double x[3];
    double y[3];
    double z[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("x %d 벡터의 값 : ", i);     // 몇 번째 벡터인지 표시방법 알기
        scanf("%lf", &x[i]);

        printf("y %d 벡터의 값 : ", i);
        scanf("%lf", &y[i]);
    }
    printf("\n");

    vector_add(x, y, z);
    vector_dot_prod(x, y, z);

    return 0;
}

void vector_add(double x[], double y[], double z[])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        z[i] = x[i] + y[i];
        printf("%lf\n", z[i]);
    }
    printf("\n");
}

double vector_dot_prod(double x[], double y[], double z[])
{
    int i;
    double sum = 0;
    for (i = 0; i < 3; i++)
    {
        z[i] = x[i] * y[i];
        sum += z[i];
    }
    return printf("벡터의 내적 = %lf\n", sum);
}
