#include <stdio.h>
#include <stdlib.h>

typedef struct train Train;

struct train
{
    int seats;              // 객차의 좌석 수
    struct train *next;     // 다음 객차를 연결할 포인터
};

int main(void)
{
    Train *head = NULL, *tail = NULL;
    int i;
    for (i = 0; i < 5; i++)
    {
        if (head == NULL)
        {
            head = tail = (Train *)malloc(sizeof(Train));
        }
        else
        {
            tail -> next = (Train *)malloc(sizeof(Train));
            tail = tail -> next;    // tail 포인터가 항상 연결 리스트의 마지막 위치를 기억
                                    // 하도록 새로운 구조체 변수를 연결한 후에는 tail의 값을
                                    // 마지막 위치로 바꾼다.
        }
    }

    return 0;
}