// 소규모의 데이터베이스 프로그램 작성, 자기가 소유하고 있는 도서를 관리하는 프로그램 작성
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

typedef struct book {
    char name[SIZE];
    char auth[SIZE];
    char prin[SIZE];
} BOOK;

void menu();
BOOK get_record();
void add_record(FILE *fp);
void print_record(BOOK data);
void search_record(FILE *fp);

int main(void)
{
    FILE *fp;
    int select;
    if ((fp = fopen("bookdata.dat", "a+")) == NULL)
    {
        fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.");
        exit(EXIT_FAILURE);
    }

    while (1)
    {
        BOOK data;
        menu();
        printf("정수 값을 입력하시오 : ");
        scanf("%d", &select);
        switch(select)
        {
            case 1: add_record(fp); break;
            case 2: print_record(data); break;
            case 3: search_record(fp); break;
            case 4: return 0;
        }
    }
    fclose(fp);

    return 0;
}

void search_record(FILE *fp)
{
    char name[SIZE];
    BOOK data;

    fseek(fp, 0, SEEK_SET);
    getchar();
    printf("탐색하고자 하는 도서의 이름 : ");
    gets(name);
    while (1)
    {
        fread(&data, sizeof(data), 1, fp);
        if (strcmp(data.name, name) == 0)
        {
            print_record(data);
            break;
        }
    }
}

void print_record(BOOK data)
{
    printf("도서의 이름 : %s\n", data.name);
    printf("저자 : %s\n", data.auth);
    printf("출판사 : %s\n", data.prin);
}

void add_record(FILE *fp)
{
    BOOK data;
    data = get_record();
    fseek(fp, 0 , SEEK_END);
    fwrite(&data, sizeof(data), 1, fp);
}

BOOK get_record()
{
    BOOK data;

    getchar();
    printf("도서의 이름 : ");   gets(data.name);
    printf("저자 : ");  gets(data.auth);
    printf("출판사 : "); gets(data.prin);

    return data;
}

void menu()
{
    printf("==========================\n");
    printf("1. 추가\n2. 출력\n3. 검색\n4. 종료\n");
    printf("==========================\n");
}