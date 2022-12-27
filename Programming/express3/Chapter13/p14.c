// 데이터베이스의 기능을 하는 간단한 프로그램 작성해보자, 이 프로그램은 mp3와 같은 음악
// 파일을 관리한다. 사용자는 음악 파일을 추가, 삭제, 출력할 수 있으며, 제목을 가지고
// 특정 곡을 탐색할 수 있다.
#include <stdio.h>
#include <string.h>

enum select { ADD = 1, PRINT, SEARCH, END };

typedef struct {
    int number;
    char name[20];
    char singer[20];
    char loc[20];
    int type_scale;
} FINDED;

void oneto(void);
void Adds(FINDED s_finded[]);
void Prints(FINDED s_finded[]);
void Searchs(FINDED s_finded[]);

int main(void)
{
    FINDED s_finded[10] = {'0', };
    enum select Selct;
    char ch;

    while (1)
    {
        oneto();

        printf("정수값을 입력하시오 : ");
        scanf("%d", &Selct);
        getchar();

        if (Selct == 4)
            break;

        switch (Selct)
        {
            case ADD: 
                Adds(s_finded); break;
            case PRINT:
                Prints(s_finded); break;
            case SEARCH:
                Searchs(s_finded); break;
            default:
                printf("잘못된 정수값입니다.");
        }
    }

    return 0;
}

void Searchs(FINDED s_finded[])
{
    int i;
    char searhbox[20];

    printf("검색할 제목을 입력하시오 : ");
    gets(searhbox);

    for (i = 0; i < 10; i++)
    {
        if ((strcmp(searhbox, s_finded[i].name) == 0))
            printf("%d번 트랙에 존재하는 곡입니다.\n", s_finded[i]);
        else
            printf("존재하지 않는 곡입니다.\n");
    }
}

void Prints(FINDED s_finded[])
{
    int i;

    for (i = 0; i < 10; i++)
    {
        if (s_finded[i].name != NULL)
        {
            printf("%s, %s, %s, %d\n", s_finded[i].name, s_finded[i].singer,
            s_finded[i].loc, s_finded[i].type_scale);
        }
    }
}

void Adds (FINDED s_finded[])
{
    int i;
    char name[20];
    char singer[20];
    char loc[20];
    int type_scale;
    int count = 0;

    for (i = 0; i < 10; i++)
    {
        if (s_finded[i].name == NULL)
        {
            printf("추가할 제목을 입력하시오 : ");    gets(s_finded[i].name);
            printf("가수의 이름을 입력하시오 : ");    gets(s_finded[i].singer);
            printf("위치를 입력하시오 : ");           gets(s_finded[i].loc);
            printf("장르(0: 가요, 1: 팝, 2: 클래식, 3: 영화음악");
            scanf("%d", &s_finded[i].type_scale);
            count++;
            break;
        }
    }

    if (count == 0)
        printf("추가할 공간이 없습니다.\n");
}

void oneto()
{
    puts("=========================");
    puts("1. 추가");
    puts("2. 출력");
    puts("3. 검색");
    puts("4. 종료");
    puts("=========================");
}