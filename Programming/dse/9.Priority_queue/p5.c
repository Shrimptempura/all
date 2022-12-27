/* 힙 정렬
최대 힙을 이용하면 정렬을 할 수 있다. n개의 요소는 O(nlog2n)시간 안에 정렬된다.

예로 1차원 배열에 정렬되지 않은 상태로 저장되었다.
23-56-11-9-56-99-27-34
-> 최대 힙에 추가하여 힙 생성
한 번에 하나씩 요소를 힙에서 꺼내서 배열의 뒤쪽부터 저장하면 된다. 
배열 요소들은 값이 증가되는 순서로 정렬되게 된다. */

// 힙 정렬 프로그램
#include <stdio.h>
#include <stdlib.h>

// 앞의 최대 힙 코드 여기에 추가

// 우선순위 큐인 힙을 이용한 정렬
void heap_sort(element a[], int n)
{
    int i;
    HeapType *h;

    h = create();
    init(h);
    for (i = 0; i < n; i++) {
        insert_max_heap(h, a[i]);
    }
    for (i = (n - 1); i >= 0; i--) {
        a[i] = delete_max_heap(h);
    }
    free(h);
}

#define SIZE 8
int main(void)
{
    element list[SIZE] = {23, 56, 11, 9, 56, 99, 27, 34};
    heap_sort(list, SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", list[i].key);
    }
    printf("\n");
    return 0;
}

/* 힙 정렬의 복잡도
힙 트리의 전체 높이가 거의 log2n이므로(완전이진트리이므로) 따라서 하나의 요소를 힙에 삽입하거나
삭제할 때 힙을 재정비하는 시간이 log2n만큼 소요된다. 요소의 개수가 n개이므로
전체적으로 O(nlog2n)의 시간이 걸린다.

이 시간 복잡도는 삽입 정렬같은 간단한 정렬 알고리즘이 O(n^2) 걸리는 것에 비하면 좋은 편이다.
또한 힙 정렬이 최대로 유용한 경우는 전체 자료를 정렬하는 것이 아니라 
가장 큰 값 몇개만 필요할때다.
*/
