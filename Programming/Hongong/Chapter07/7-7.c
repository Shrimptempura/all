// 3번 실행되는 재귀호출 함수2
#include <stdio.h>

void fruit(int count);

int main(void)
{
    fruit(1);       // 처음으로 호출하므로 1을 인수로 준다.

    return 0;
}

void fruit(int count)   // 호출 횟수를 매개변수에 저장
{
    printf("apple\n");
    if (count == 3) return;     // 호출 횟수가 3이면 반환하고 끝낸다.
    fruit(count + 1);           // 재호출할 때 호출 횟수를 1증가
    printf("jam\n");
}

/*
void fruit(int count)   추가 설명
void fruit(1) 최초 호출
pf(apple)
if count ==3
fruit count + 1;;;  <- 여기서 다시 새로운 fruit(2)시작
반복
fruit count == 3일시 return을 받는데
fruit count2로 return이 된다
fruit count2의 if count == 3 return 밑으로 리턴을 받아서
밑에 pf인 잼 출력하고 다시 리턴을
fruit1을 리턴받고 잼 또 출력
*/