// 함수에서 -> 연산자를 사용하여 구조체 배열의 값 출력
#include <stdio.h>

struct address      // 주소록을 만들 구조체 선언
{
    char name[20];
    int age;
    char tel[20];
    char addr[20];
};

void print_list(struct address *lp);

int main(void)
{
    struct address list[5] = {
        {"홍길동", 23, "111-1111", "울릉도 독도"},
        {"이순신", 35, "222-2222", "서울 건천동"},
        {"장보고", 19, "333-3333", "완도 청해진"},
        {"유관순", 15, "444-4444", "충남 천안"},
        {"안중근", 45, "555-5555", "황해도 해주"}
    };

    print_list(list);   // 배열명 list는 첫 번째 요소의 주소로 
                        //struct address 구조체 변수를 가리킴
    // 포인터가 배열명을 저장하면 배열명처럼 사용할 수 있으므로, 이제 매개변수 lp로
    // 각 배열 요소를 참조하고 멤버들을 출력할수있다.
    return 0;
}

void print_list(struct address *lp)     // 매개벼수는 구조체 포인터
{
    int i;

    for (i = 0; i < 5; i++)             // 배열 요소의 갯 만큼 반복
    {
        printf("%10s%5d%15s%20s\n",     // 각 배열 요소의 멤버 출력
        (lp + i) -> name, (lp + i) -> age, (lp + i) -> tel, (lp + i) -> addr);
    }
}
/* 38행 포현법 3가지
1) 배열 표현 ==> lp[i].name
2) 포인터 표현 ==> (*(lp + i)).name
3) 연산자 사용 ==> (lp + i) -> name

이때 괄호를 적절히 사용해야 한다. -> 우선순위 때문에
배열 요소를 참조하는 연산자인 대괄호는 . 연산자와 우선순위가 같고
연산 방향이 왼쪽에서 오른쪽이므로 배열의 요소에 먼저 접근하고 해당 배열 요소의
name 멤버에 접근합니다. <그러나> 배열 표현을 포인터 표현식으로 바꾸면
* 연산자가 . 연산자보다 우선순위가 낮으므로 반드시 괄호를 넣어야 한다.
*/