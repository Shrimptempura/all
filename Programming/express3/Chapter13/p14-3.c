#include <stdio.h>
#include <string.h>
#define SIZE 20

typedef struct {
	char title[20];		// 제목
	char singer[20];	// 가수
	int class;			// 종류
} Music;		// typedef의 변수 선언

int i;
int num[SIZE] = {0};	// num[20]; 전역변수

void add_music (Music* list);					// 추가
void print_music (Music* list);					// 출력
void search_music (Music* list, int size);		// 검색
void delete_music (Music* list);				// 삭제

int main(void)
{
	Music list[SIZE];		// typedef의 변수 Music의 배열 list[20];
	int n, result = 1;

	printf("======================\n");	
	printf(" 1. 추가(ADD)\n");
	printf(" 2. 출력(PRINT)\n");
	printf(" 3. 검색(SEARCH)\n");
	printf(" 4. 삭제(DELETE)\n");
	printf(" 5. 종료(EXIT)\n");
	printf("======================\n");

	while(result == 1)		// res가 1일 동안, case5에서 0대입시 반복종료
    {
		printf("메뉴를 선택하시오: ");
		scanf("%d", &n);
		// fflush(stdin);
		getchar();

		switch(n) 		// scanf로 받은 n을 switch로 돌림
        { 
			case 1: 
				add_music(list);	// 추가
				break;

			case 2:
				print_music(list);	// 출력
				break;

			case 3: 
				search_music(list, SIZE);	// 검색
				break;

			case 4:
				delete_music(list);		// 삭제
				break;

			case 5:
				result = 0;	// 종료
		} 
	}

	return 0;
}

void add_music(Music *list)		// 추가, list는 배열임, list[];
{
	do 
    {
		printf("1번부터 %d번까지 트랙이 있습니다. 몇 번 트랙에 저장하시겠습니까?", SIZE);
		scanf("%d", &i);		// 인덱스 번호 저장
		// fflush(stdin);
		getchar();

		if(num[i - 1] == 1)		// 인덱스 번호라 -1;, struct은 list이고, num은 전역
			printf("이미 저장되어있는 트랙입니다. 다른 트랙번호를 입력하시오\n");
	} while(num[i - 1] == 1);	// while이 1일동안에만 무한반복(1인 경우는 중복)

	printf("제목: ");
    gets(list[i - 1].title);	// 인덱스 번호라 -1;

	printf("가수: ");					
    gets(list[i - 1].singer);

	printf("종류(팝=0, 재즈=1, 클래식=2, 락=3): ");	
    scanf("%d",&list[i - 1].class);
	// fflush(stdin);
	getchar();

	num[i - 1] = 1;
	printf("\n");
}

void print_music(Music *list)	// 출력, *list는 배열이므로..
{
	do
    {
		printf("몇 번 트랙의 음악정보를 출력하시겠습니까? ");
		scanf("%d", &i);
		if(num[i - 1] == 0)		// 추가 성공시 1대입했으므로..
			printf("해당 트랙엔 저장된 음악정보가 없습니다. 다른 트랙번호를 입력하시오\n");
	} while(num[i - 1] == 0);

	printf("제목: %s\n", list[i - 1].title);
	printf("가수: %s\n", list[i - 1].singer);

	switch(list[i - 1].class)
    {
		case 0: printf("종류: 팝\n"); break;
		case 1: printf("종류: 재즈\n"); break;
		case 2: printf("종류: 클래식\n"); break;
		case 3: printf("종류: 락\n"); break;
	}
	printf("\n"); 
}

void search_music(Music *list, int size)	// 탐색
{
	char searchName[20];	// 찾을 이름 배열
	int count = 0;

	printf("검색하고자 하는 노래 제목을 입력하시오: ");
	gets(searchName); 

	for(i = 0; i < size; i++)		// 배열 20까지 있음;
    {
		if(strcmp(searchName, list[i].title) == 0)	// strcmp 같을시 출력
        {
			printf("제목: %s\n", list[i].title);
			printf("가수: %s\n", list[i].singer);
			count++;
			switch(list[i].class)
            {
				case 0: printf("종류: 팝\n"); break;
				case 1: printf("종류: 재즈\n"); break;
				case 2: printf("종류: 클래식\n"); break;
				case 3: printf("종류: 락\n"); break;
			}
		}
	}		
		if (count == 0)
        {
			printf("찾으시는 노래가 없습니다\n");
		}
	printf("\n");
}

void delete_music(Music *list)		// 삭제
{
	do
    {
		printf("몇 번 트랙의 음악정보를 삭제하시겠습니까? ");
		scanf("%d", &i);

		if(num[i - 1] == 0)
			printf("해당 트랙엔 저장된 음악정보가 없습니다. 다른 트랙번호를 입력하시오\n");       
	} while(num[i - 1] == 0); 	// while이 0일동안 반복, 추가성공시 1이므로..

	num[i - 1] = 0;
	printf("%d번 트랙의 음악정보가 삭제되었습니다\n", i - 1);
	printf("\n");		
}

// list[20]... 으로만 만든게 아니라
// 전역 배열 하나 num을 만들고 비교용으로 대비하였음. 주로 중복 체크
// 값 대입이나 출력은 list.[i]에 박고..