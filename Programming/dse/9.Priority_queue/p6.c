/* 머신 스케줄링
최적의 해를 찾는 것은 힘드나 근사의 해를 찾는 법은 있다. 
그 중 한가지가 LPT(longest processing time first)이다.

예로 7개의 작업이 예정되어 있고 동일한 기계가 3대 있다.
3대를 사용하여 최소 시간만 사용하는 법, 여기서는 최소 힙을 사용했다.

여기서는 기계의 종료 시간이 중요하다. 종료 시간이 최소인 기계가 항상 선택되기 때문이다.
따라서 기계의 종료 시간을 최소 힙에 넣고 최소 힙에서 기계를 꺼내서 그 기계에 작업을 할당하면 된다.
작업을 할당한 후에는 기계의 종료 시간을 작업 시간만큼 증가시킨 후에 다시 최소 힙에 넣는다. */

// LPT 프로그램
#include <stdio.h>
#include <stdlib.h>
#define MAX_ELEMENT 200

typedef struct {
    int id;
    int avail;
} element;

typedef struct {
    element heap[MAX_ELEMENT];
    int heap_size;
} HeapType;

HeapType *create()
{
    return (HeapType *)malloc(sizeof(HeapType));
}

void init(HeapType *h)
{
    h->heap_size = 0;
}

// 현재 요소의 개수가 heap_size인 힙 h에 item을 삽입한다.
void insert_min_heap(HeapType *h, element item)
{
    int i;
    i = ++(h->heap_size);

    // 트리를 거슬러 올라가면서 부모 노드와 비교하는 과정
    while ((i != 1) && (item.avail < h->heap[i / 2].avail)) {
        h->heap[i] = h->heap[i / 2];
        i /= 2;
    }
    h->heap[i] = item;  // 새로운 노드를 삽입
}

element delete_min_heap(HeapType *h)
{
    int parent, child;
    element item, temp;

    item = h->heap[1];
    temp = h->heap[(h->heap_size)--];
    parent = 1;
    child = 2;
    while (child <= h->heap_size) {
        // 현재 노드의 자식노드중 더 작은 자식 노드를 찾는다.
        if ((child < h->heap_size) && (h->heap[child].avail) > h->heap[child + 1].avail)
            child++;
        if (temp.avail < h->heap[child].avail) break;
        // 한 단계 아래로 이동
        h->heap[parent] = h->heap[child];
        parent = child;
        child *= 2;
    }
    h->heap[parent] = temp;
    return item;
}

#define JOBS 7
#define MACHINES 3

int main(void)
{
    int jobs[JOBS] = {8, 7, 6, 5, 3, 2, 1};     // 작업은 정렬되어 있다고 가정
    element m = {0, 0};
    HeapType *h;
    h = create();
    init(h);

    // 여기서 avail 값은 기계가 사용 가능하게 되는 시간이다.
    for (int i = 0; i < MACHINES; i++) {
        m.id = i + 1;
        m.avail = 0;
        insert_min_heap(h, m);
    }
    // 최소 힙에서 기계를 꺼내서 작업을 할당하고 사용가능 시간을 증가 시킨 후에
    // 다시 최소 힙에 추가한다.
    for (int i = 0; i < JOBS; i++) {
        m = delete_min_heap(h);
        printf("JOBS %d을 시간=%d부터 시간=%d까지 기계 %d번에 할당한다. \n",
        i, m.avail, m.avail + jobs[i] - 1, m.id);
        m.avail += jobs[i];
        insert_min_heap(h, m);
    }
    return 0;
}