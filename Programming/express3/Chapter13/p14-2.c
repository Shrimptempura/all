#include <stdio.h>
#include <windows.h> 
#include <string.h>
#define SIZE 100

typedef struct {
    char title[50];        
    char singer[50];    
    int number;            
} Music;

void addMusic(Music* list, int* num);        
void printMusic(Music* list, int* num);    
void searchMusic(Music* list, int* num);    
void deleteMusic(Music* list, int* num);    

int main() 
{
    Music list[SIZE];    
    int n, num = 0;    

    while(1) 
    {
        puts("==================");
        puts(" 1. 추가(add)");
        puts(" 2. 출력(print)");
        puts(" 3. 검색(search)");
        puts(" 4. 삭제(delete)");
        puts(" 5. 종료(exit)");
        puts("==================");

        printf("메뉴를 선택하시오: ");
        scanf("%d", &n);
        fflush(stdin);    

        switch(n) 
        {
            case 1:
                addMusic(list, &num);    
                fflush(stdin);
                break;
            case 2:        
                printMusic(list, &num);
                fflush(stdin);
                break;
            case 3:        
                searchMusic(list, &num);
                fflush(stdin);
                break;
            case 4:        
                deleteMusic(list, &num);
                fflush(stdin);
                break;
            case 5:
                return 0;
        }
        system("pause");    
        system("cls");        
    }
    return 0;
}

void addMusic(Music* list, int* num) 
{
    printf("제목: ");    gets(list[*num].title);
    printf("가수: ");    gets(list[*num].singer);
    printf("별점: ");    scanf("%d", &(list[*num].number));
    (*num)++;
}

void printMusic(Music* list, int* num) 
{
    int i;

    printf("저장된 곡은 총 %d개 입니다.\n", *num);
    for(i = 0; i < (*num); i++) 
    { 
        printf("제목: ");    printf("%s\n", list[i].title);
        printf("가수: ");    printf("%s\n", list[i].singer);
        printf("별점: ");    printf("%d\n", list[i].number);
        printf("\n");
    }
}

void searchMusic(Music* list, int* num) 
{
    int i, result;
    char songName[100];

    printf("탐색할 곡의 제목: ");
    gets(songName);

    for(i = 0; i < (*num); i++) 
    {
        result = strcmp(songName, list[i].title);
        if(result == 0) 
        {
            printf("제목: ");    printf("%s\n", list[i].title);
            printf("가수: ");    printf("%s\n", list[i].singer);
            printf("별점: ");    printf("%d\n", list[i].number);
            break;
        }
        else 
        {
            printf("찾으시는 노래는 없습니다. \n");
            break;
        }
    }
}

void deleteMusic(Music* list, int* num) 
{
    int i, result, number;
    char songName[100];

    printf("삭제할 곡의 제목: ");    gets(songName);

    for(i = 0; i < (*num); i++) 
    {
        result = strcmp(songName, list[i].title);
        if(result == 0) 
        {
            number = i;
            break;
        }
    }
    for(i = number; i < (*num) - 1; i++) 
    {
        strcpy(list[i].title, list[i + 1].title);
        strcpy(list[i].singer, list[i + 1].singer);
        list[i].number = list[i + 1].number;    
    }
    (*num)--;
}