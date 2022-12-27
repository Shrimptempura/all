// 전화번호부 구성, 이름, 집전화번호, 휴대폰 번호로 구성되는 구조체 정의 후
// 이 구조체의 배열을 선언하여 전화번호후 구성, 3명의 데이터를 사용자로부터 받아서 저장하자
// 사용자로부터 이름을 입력받아서 전화번호를 검색하는 프로그램 만들자
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[10];
    char home_num[20];
    char mobile[20];
} CALL;

int main(void)
{
    CALL clist[3];
    char find_list[10];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("이름을 입력하시오 : ");
        gets(clist[i].name);
        printf("집전화번호를 입력하시오 : ");
        gets(clist[i].home_num);
        printf("휴대폰번호를 입력하시오 : ");
        gets(clist[i].mobile);
    }
    printf("\n");

    printf("검색할 이름을 입력하시오 : ");
    gets(find_list);

    for (i = 0; i < 3; i++)
    {
        if (strcmp(clist[i].name, find_list) == 0)
        {
            puts(clist[i].home_num);
            puts(clist[i].mobile);
        }
    }

    return 0;
}