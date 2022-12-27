#include <stdio.h>

typedef struct {
    int number;
    char name[20];
    char mobile[20];
    int age;
} Employee;

int main(void) 
{
    Employee employee[10];
    int i, count = 0;

    for(i = 0; i < 10; i++) 
    {
        printf("== %d번째 직원정보 == \n", i+1);
        printf(" 사    번 : ");        scanf("%d", &employee[i].number);
        fflush(stdin);
        printf(" 이    름 : ");        gets(employee[i].name);
        printf(" 전화번호 : ");        gets(employee[i].mobile);
        printf(" 나    이 : ");        scanf("%d", &employee[i].age);
        
    }
    printf("\n");

    printf("== 나이가 20이상 30이하인 직원 == \n");
    for(i = 0; i < 10; i++) 
    {
        if(employee[i].age >=20 && employee[i].age <= 30) 
        {
            puts(employee[i].name);
            count++;
        }
    }
    printf(" [총인원] : %d 명 \n", count);

    return 0;
}