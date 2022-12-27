// 책 목록 관리 프로그램, 연결리스트 응용 예
// 연결 리스트를 사용하여 사용자가 입력하는 책 개수만큼 메모리를 할당받음
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define S_SIZE 50

typedef struct NODE {       // 노드의 타입 정리, 자기 참조 구조체
    char title[S_SIZE];
    int year;
    struct NODE *link;
} NODE;

int main(void)
{
    // 노드를 가리키는 포인터 정의
    NODE *list = NULL;
    NODE *prev, *p, *next;

    char buffer[S_SIZE];
    int year;

    // 연결 리스트에 정보를 입력한다.               head pointer : list
    while (1)
    {
        printf("책의 제목을 입력하시오 : (종료하려면 엔터)" );
        gets(buffer);
        if (buffer[0] == '\0')
            break;

        // 동적 메모리 할당
        p = (NODE *)malloc(sizeof(NODE));

        strcpy(p -> title, buffer);

        printf("책의 출판 연도를 입력하시오 : ");
        gets(buffer);

        year = atoi(buffer);    // atoi, 문자열을 정수형으로
        p -> year = year;

        if (list == NULL)   // 리스트가 비어 있으면
            list = p;       // 새로운 노드를 첫번째 노드로 만든다.
        else                // 리스트가 비어 있지 않다면
            prev -> link = p;   // 새로운 노드를 이전 노드의 끝에 붙인다.
        p -> link = NULL;       // 새로운 노드의 링크 필드를 NULL로 설정
        prev = p;
    }
    printf("\n");

    // 연결 리스트에 들어 있는 정보를 모두 출력한다.
    p = list;
    while (p != NULL)       // 연결 리스트 안의 노드 순회
    {
        printf("[%s, %d] ->", p -> title, p -> year);
        p = p -> link;
    }
    printf("\n");

    // 동적 할당 반납
    p = list;
    while (p != NULL)   
    {
        next = p -> link;
        free(p);    //
        p = next;
    }

    return 0;
}