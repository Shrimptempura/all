#include <stdio.h>

typedef struct {
    char foodName[100];
    int calories;
} Mail;

int main(void) 
{
    Mail foodArr[10];
    int i = 0;
    char op;

    while(1) 
    {
        printf("음식정보를 저장하시겠습니까?(y/n) : ");
        scanf("%c", &op);        
        fflush(stdin);

        if(op == 'n')
            break;
        printf("\n");

        printf("음식이름 : ");
        gets(foodArr[i].foodName);
        printf("칼 로 리 : ");
        scanf("%d", &foodArr[i].calories);
        fflush(stdin);
    }
    
    return 0;
}