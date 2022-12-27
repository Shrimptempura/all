#include <stdio.h>
#include <string.h>
#define TITLE_SIZE 50
#define NAME_SIZE 50
#define LOCATION_SIZE 50

enum music_type { KPOP, POP, CLASSIC, SCREEN_MUSIC };

typedef struct music {
	char title[TITLE_SIZE];
	char singer[NAME_SIZE];
	char location[LOCATION_SIZE];
	enum music_type genre;
} MUSIC;

void add_record(MUSIC library[], int count);	// 추가
void menu();									// 기본틀, 메뉴
int get_input();								// 메뉴선택 숫자
void search_record(MUSIC library[], int count);		// 검색
void print_record(MUSIC library[], int count);		// 출력

int main(void) 
{
	int num, count = 0;
	MUSIC library[30] = {'\0'};		// typedef의 변수선언과 배열 초기화, 널

	while(1) 
    {
		menu();					// 메뉴 출력
		num = get_input();		// 메뉴 선택할 숫자 받음
		switch(num) 			// 선택 숫자로 스위치문 돌아감
        {
			case 1:
			add_record(library, count);		// 1번. 추가
			count++;
			continue;

			case 2:
			print_record(library, count);	// 2번. 출력
			continue;

			case 3:
			search_record(library, count);	// 3번. 검색
			continue;

			case 4:
			return -1;

			default:
				printf("1 ~ 4사이의 값을 입력해주십시오\n");
				continue;
		}

		return 0;
	}
}

void add_record(MUSIC library[], int count) 
{
	int type;
	fflush(stdin);
	printf("제목:");
	gets(library[count].title);
	printf("가수:");
	gets(library[count].singer);
	printf("위치:");
	gets(library[count].location);

	printf("장르(0: 가요, 1: 팝, 2: 클래식, 3: 영화음악)");
	scanf("%d",&type);
	if(type >= KPOP && type <= SCREEN_MUSIC)
        library[count].genre = type; 
    else
        library[count].genre = KPOP;
}

void menu() 
{
	printf("====================\n");
	printf(" 1. 추가\n");
	printf(" 2. 출력\n");
	printf(" 3. 검색\n");
	printf(" 4. 종료\n");
	printf("====================\n");
}

int get_input() 
{
	int num;

	printf("정수값을 입력하시오 : ");
	scanf("%d",&num);

	return num;
}

void search_record(MUSIC library[], int count) 
{
	int i;
	char title[TITLE_SIZE];

	fflush(stdin);
	printf("제목: ");
	gets(title);
	for (i = 0; i < count; i++) 
    {
		if(strcmp(title,library[i].title) == 0) 
        {
			printf("저장된 위치는 %s\n",library[i].location);
			return;
		}
	}

	printf("찾는 음악이 테이블에 없습니다.\n");
}

void print_record(MUSIC library[], int count) 
{
	int i, num;

	fflush(stdin);

	printf("몇번 인덱스를 출력할 것입니까?");
	scanf("%d", &num);

	i = num;
	printf("제목 : %s\n",library[i].title);
	printf("가수 : %s\n",library[i].singer);
	printf("위치 : %s\n",library[i].location);
	if(library[i].genre == 0)
        printf("장르 : 가요\n"); 
    else if(library[i].genre == 1)
        printf("장르 : 팝\n"); 
    else if(library[i].genre == 2)
        printf("장르 : 클래식\n"); 
    else if(library[i].genre == 3)
        printf("장르 : 영화음악\n");
}