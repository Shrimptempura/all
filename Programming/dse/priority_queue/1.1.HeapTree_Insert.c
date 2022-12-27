// 힙 트리에서의 삽입 함수
// 현재 요소의 개수가 heap_size인 힙 h에 item을 삽입한다.
// 삽입함수
void insert_max_heap(HeapType* h, element item)
{
    int i;
    i = ++(h -> heap_size);

    // 트리를 거슬러 올라가면서 부모 노드와 비교하는 과정
    while ((i != 1) && (item.key > h -> heap[i / 2].key)) {
        h -> heap[i] = h -> heap[i / 2];
        i /= 2;
    }
    h -> heap[i] = item; // 새로운 노드를 삽입
}