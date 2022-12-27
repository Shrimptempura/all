#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char homeNum[20];
    char phoneNum[20];
} Contact;

int main(void) 
{
    Contact contact[5];
    char searchName[20];
    int i;
    char op;

    for(i = 0; i < 5; i++) 
    {
        printf("== %d번째 전화번호부 == \n", i+1);
        printf(" 이    름 : ");        gets(contact[i].name);
        printf(" 집 번 호 : ");        gets(contact[i].homeNum);
        printf(" 휴대전화 : ");        gets(contact[i].phoneNum);
    }
    printf("\n");

    do {
        printf("찾으려는 이름을 입력하세요 : ");
        gets(searchName);
        for(i = 0; i < 5; i++) 
        {
            if(strcmp(searchName, contact[i].name) == 0) 
            {
                printf(" 집 번 호 : %s \n", contact[i].homeNum);
                printf(" 휴대전화 : %s \n", contact[i].phoneNum);
                printf("\n");
            }
        }
        printf("계속 찾으시겠습니까?(y/n) : ");
        scanf("%c", &op);
        getchar();
    } while(op != 'n');

    return 0;
}