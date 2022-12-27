// 개별적으로 할당된 구조체 변수들을 포인터로 연결하면 관련된 데이터를 하나로 묶어 관리가능
// 이때 자기 참조 구조체를 사용, 자기 참조 구조체로 list 만들기
#include <stdio.h>

struct list     // 자기 참조 구조체
{
    int num;    // 데이터를 저장하는 멤버
    struct list *next;      // 구조체 자신을 가리키는 포인터 멤버
};

int main(void)
{
    struct list a = {10, 0}, b = {20, 0}, c = {30, 0};      // 구조체 변수 초기화
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
/*
5행 8행의 *next는 자신의 구조체를 가리키는 포인터 멤버이다.
16,17행은 a의 next멤버로 b를 가리키고, b의 next멤버로 c를 가리킨다.
    (연결리스트, linked list) : head가 있고 다음 노드는 2개로 값과 키? 있는 형태
19행의 head -> num은 ==> *head = &a, head는 a를 가리킴, 가리키는 a의 num 멤버이므로 '10'이 된다
20행은 head(a) -> next는 a의 next이다, a.next임 , a.next -> num은 b의 num 값 '20'이 된다
왜? 16,17행 참고, a.next는 b의 주소값을 가지기 때문, 고로 결국 20행은 b의 num 값 20
    <만약> head로 c의 num 값 30을 사용하려면 head -> next -> next -> num이다
    head(a) -> next;; (a.next) a.next(&b) -> next, --> b.next ==> c의값 30이 나온다

23행에서 current는 최초 a를 가리키다 반복분(while)에서 28행이 수행될 때마다 다음 변수를
가리키며 모든 num을 출력한다
    ==> 28행에서 최초 current -> next는 a의 next이므로 그 값을 current에 다시 저장하면
    current는 b를 가리키게 됩니다. 따라서 다음 반복에서 current -> next는 b의 next가 되므로
    그 값을 currnet에 저장하면 결국 current는 c를 가리키게 된다.

링크리스트 표현법 참고

head        a         b         c
    ---> 10 | . --> 20|. ---> 30|0
        num, next  num,next   num next

    current -> a;  current = current -> next; currnet -> b

마지막에 current가 c를 가리킬때 current -> next는 0이므로 그 값을 current에 저장하면
current는 널 포인터가 되어 25행 while에서 반복을 종료한다,
결국 current 포인터는 연결 리스트 링크를 따라가며 모든 값을 출력한다.
<물론> 이 과정은 head 포인터로도 수행할 수 있지만 head 포인터의 값을 바꾸면
다시 처음 위치를 찾아갈 수 없으므로 항상 연결 리스트의 시작위치를 기억하도록
그 값을 바꾸지 않는 것이 좋다.
*/