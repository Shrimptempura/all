// 개별적으로 할당된 구조체 변수들을 포인터로 연결하면 관련된 데이터를 하나로 묶어 관리가능
// 이때 자기 참조 구조체를 사용, 자기 참조 구조체로 list 만들기
#include <stdio.h>

struct list     // 자기 참조 구조체
{
    int num;
    struct list *next;      // 구조체 자신을 가리키는 포인터 멤버
};

int main(void)
{
    struct list a = {10, 0}, b = {20, 0}, c = {30, 0};
    struct list *head = &a, *current;       // 헤드 포인터 초기화

    a.next = &b;        // a의 포인터 멤버가 b를 가리킴
    b.next = &c;        // b의 포인터 멤버가 c를 가리킴

    printf("head -> num : %d\n", head -> num);      // head가 가리키는 a의 num 멤버 사용
    printf("haed -> next -> num : %d\n", head -> next -> num);  // head로 b의 num 멤버 사용

    printf("list all : ");
    current = head;     // 최초 current 포인터가 a를 가리킴

    while (current != NULL)     // 마지막 구조체 변수까지 출력하면 반복 종료
    {
        printf("%d  ", current -> num);     // current가 가리키는 구조체 변수의 num 출력
        current = current -> next;          // current가 다음 구조체 변수를 가리키도록 함
    }
    printf("\n");

    return 0;
}