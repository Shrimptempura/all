// 직원을 나타내는 구조체 employee가 사번(정수), 이름(문자열), 전화번호(문자열), 나이(정수)
// 등으로 구성된다. 구조체의 배열을 선언하고 10명의 데이터로 초기화해라. 이중에서 나이가
// 20이상 30이하인 직원을 찾아서 출력하도록 하라. typedef을 사용해서 구조체 타입 정의
#include <stdio.h>

typedef struct {
    int num;
    char name[10];
    char callnum[20];
    int age;
} EMPLOYEE;

int main(void)
{
    EMPLOYEE elist[10];
    int i, count = 0;

    for (i = 0; i < 10; i++)    // 문자열은 gets로 받고 숫자는 scanf로 받는 습관들이자
    {                       
        printf("%d번째 직원정보 : ", i + 1);
        scanf("%d", &elist[i].num);
        fflush(stdin);
        printf("이름 : ");
        gets(elist[i].name);
        printf("전화 번호 : ");
        scanf("%s", elist[i].callnum);
        printf("나이 : ");
        scanf("%d", &elist[i].age);
    }
    printf("\n");

    printf("나이가 20이상 30이하 출력용\n");
    for (i = 0; i < 10; i++)
    {
        if (elist[i].age >= 20 && elist[i].age <= 30)
        {
            printf("%s ", elist[i].name);   // gets로 받은건 puts로 출력해보자
            count++;
        }
    }
    printf("\n");

    printf("해당 총 인원 : %d명\n", count);

    return 0;
}