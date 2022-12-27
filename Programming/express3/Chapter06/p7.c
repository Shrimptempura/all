// 사용자로부터 키를 입력받아 표준 체중 계산후 체중의 결과 판단
// 표준 체중 = (키 - 100) * 0.9
#include <stdio.h>

int main(void)
{
    double cm, kg, normal, rage, rage1;

    printf("체중과 키를 입력하세요 : ");
    scanf("%lf %lf", &cm, &kg);

    normal = (cm - 100.0) * 0.9;
    rage = normal + normal * 0.07;
    rage1 = normal - normal * 0.07;

    if ((kg > rage1) && (kg < rage))
        printf("정상 체중입니다.\n");
    else if (kg < rage1)
        printf("저체중입니다.\n");
    else if (kg > rage)
        printf("과체중입니다.\n");

    printf("당신의 표준 체중 = %.2lf\n", normal);

    return 0;
}