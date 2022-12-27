/*
리스트 ADT
insert(list, pos, item) : pos 위치에 요소를 추가한다.
insert_last(list, item) : 맨 끝에 요소를 추가한다.
insert_first(list, item) : 맨 처음에 요소를 추가한다.
delete(list, pos) : pos 위치의 요소를 제거한다.
clear(list) : 리스트의 모든 요소를 제거한다.
get_entry(list, pos) : pos 위치의 요소를 반환한다.
get_length(list) : 리스트의 길이를 구한다.

리스트는 배열과 연결리스트로 구현가능함
배열은 간단하고 속도가 빠르다. 크기가 고정됨
연결리스트는 크기의 제한을 받지 않고, 중간에 쉽게 삽입 또는 삭제가 가능한 리스트 구현가능
하지만 구현이 복잡하고, 임의의 항목을 추출시 배열보다 시간이 많이 걸림
*/

// 배열 리스트
#include <stdio.h>
#include <stdlib.h>
#define MAX_LIST_SIZE 100

typedef  int element;
typedef struct {
    element array[MAX_LIST_SIZE];
    int size;
} ArrayListType;

void error(char *message)
{
    fprintf(stderr, "%s\n", message);
    EXIT_FAILURE;
}

void init(ArrayListType *L)
{
    L->size = 0;
}

int is_empty(ArrayListType *L)
{
    return L->size == 0;
}

int is_full(ArrayListType *L)
{
    return L->size == MAX_LIST_SIZE;
}

element get_entry(ArrayListType *L, int pos)
{
    if (pos < 0 || pos >= L->size)
        error("위치 오류");
    return L->array[pos];
}

void print_list(ArrayListType *L)
{
    int i;
    for (i = 0; i < L->size; i++)
        printf("%d->", L->array[i]);
    printf("\n");
}

void insert_last(ArrayListType *L, element item)
{
    if (L->size >= MAX_LIST_SIZE) {
        error("리스트 오버플로우");
    }
    L->array[L->size++] = item;
}

void insert(ArrayListType *L, int pos, element item)
{
    if (!is_full(L) && (pos >= 0) && (pos <= L->size)) {
        for (int i = (L->size - 1); i >= pos; i--)
            L->array[i + 1] = L->array[i];
        L->array[pos] = item;
        L->size++;
    }
}

element delete(ArrayListType *L, int pos)
{
    element item;

    if (pos < 0 || pos >= L->size)
        error("위치 오류");
    item = L->array[pos];
    for (int i = pos; i < (L->size - 1); i++)
        L->array[i] = L->array[i + 1];
    L->size--;

    return item;
}

int main(void)
{
    // ArrayListType를 정적으로 생성하고 ArrayListType를
    // 가리키는 포인터를 함수의 매개변수로 전달한다.
    ArrayListType list;

    init(&list);
    insert(&list, 0, 10); print_list(&list);
    insert(&list, 0, 20); print_list(&list);
    insert(&list, 0, 30); print_list(&list);
    insert_last(&list, 40); print_list(&list);
    delete(&list, 0);     print_list(&list);

    return 0;
}