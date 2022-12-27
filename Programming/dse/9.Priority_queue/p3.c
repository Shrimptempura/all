/* 힙의 삽입 연산
- 회사에서 신입 사원이 들어오면 말단 위치에서 시작하여 능력에 따라 위로 승진시키는 것과 비슷

힙에 새로운 요소가 들어오면 일단 새로운 노드를 힙의 마지막 노드로 삽입,
마지막 노드 다음에 새로운 노드를 위치시키면 힙트리의 성질이 만족되지 않을 수도 있다.
따라서 십입후 새로운 노드를 부모 노드들과 교환하여 힙의 성질을 만족시켜 주어야 한다.

    힙트리에서의 삽입 알고리즘(pseudocode)
insert_max_heap(A, key):

1. heap_size <- heap_size + 1;
2. i <- heap_size;
3. A[i] <- key;
4. while i != 1 and A[i] > A[PARENT(i)] do
5.      A[i] <-> A[PARENT];
6.      i <- PARENT(i);

1. 힙 크기를 하나 증가시킨다.
2. 증가된 힙 크기 위치에 새로운 노드를 삽입한다.
4. i가 루트 노드가 아니고 i번째 노드가 i의 부모 노드보다 크면
5. i번째 노드와 부모 노드를 교환
5. 한 레벨 위로 올라간다(승진).

실제 구현에서는 바로 교환하는 것이 아니라 그냥 부모 노드만을 끌어내린 다음, 삽입될 위치가
확실히 진 다음에 최종적으로 새로운 노드는 그 위치로 이동한다. -> 이동 횟수를 줄일 수 있음 */

// 힙 트리에서의 삽입 함수
// 현재 요소의 개수가 heap_size인 힙 h에 item을 삽입한다.
void insert_max_heap(HeapType *h, element item)
{
    int i;
    i = ++(h->heap_size);

    // 트리를 거슬러 올라가면서 부모 노드와 비교하는 과정
    while ((i != 1) && (item.key > h->heap[i / 2].key)) {
        h->heap[i] = h->heap[i / 2];
        i /= 2;
    }
    h->heap[i] = item;  // 새로운 노드를 삽입
}

/* 힙의 삭제 연산
- 회사에서 사장의 자리가 비게 되면 제일 말단 사원을 사장 자리로 올린 다음 강등시키는 것과 비슷함

최대 힙에서 삭제 연산은 최대 값을 가진 요소를 삭제하는 것.
최대 힙에서 최대값은 루트 노드이므로 루트 노드가 삭제된다.
루트 노드 삭제 후에 힙을 재구성하는 것이 필요하게 된다.
힙의 재구성이란 힙의 성질을 만족하기 위하여 위, 아래 노드를 교환하는 것이다.

    힙트리에서의 삭제 알고리즘
delete_max_heap(A):

1. item <- A[i];
2. A[1] <- A[heap_size];
3. heap_size<-heap_size - 1;
4. i <- 2;
5. while i <= heap_size do
6.      if i < heap_size and A[i + 1] > A[i]
7.          then largest <- i + 1;
8.          else largest <- i;
9.      if A[PARENT(largest)] > A[largest]
10.         then break;
11.     A[PARENT(largest)] <-> A[largest];
12.     i <- CHILD(largest);
13. return item;

1. 루트 노드 값을 반환을 위하여 item 변수로 옮긴다.
2. 말단 노드를 루트 노드로 옮긴다.
3. 힙의 크기를 하나 줄인다.
4. 루트의 왼쪽 자식부터 비교를 시작한다.
5. i가 힙트리의 크기보다 작으면 (즉, 힙트리를 벗어나지 않았으면)
6. 오른쪽 자식이 더 크면
7-8. 두개의 자식 노드 중 큰 값의 인덱스를 largest로 옮긴다.
9. largest의 부모 노드가 largest보다 크면
10. 중지
11. 그렇지 않으면 largeset와 largest 부모 노드를 교환한다.
12. 한 레벨 밑으로 내려간다.
13. 최대값을 반환한다. */

// 힙트리에서의 삭제 함수
element delete_max_heap(HeapType *h)
{
    int parent, child;
    element item, temp;

    item = h->heap[1];
    temp = h->heap[(h->heap_size)--];
    parent = 1;
    child = 2;
    while (child <= h->heap_size) {
        // 현재 노드의 자식 노드중 더 큰 자식노드를 찾는다.
        if ((child < h->heap_size) && (h->heap[child].key) < h->heap[child + 1].key)
            child++;
        if (temp.key >= h->heap[child].key) break;
        // 한 단계 아래로 이동
        h->heap[parent] = h->heap[child];
        parent = child;
        child *= 2;
    }
    h->heap[parent] = temp;
    return item;
}
