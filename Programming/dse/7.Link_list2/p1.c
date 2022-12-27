/*
<원형 연결 리스트>
- 마지막 노드가 첫 번째 노드를 가리키는 리스트
- 즉 마지막 노드의 링크 필드가 널(NULL)이 아니라 첫 번째 노드 주소가 되는 리스트
장점) 하나의 노드에서 다른 모든 노드로의 접근이 가능함
    따라서 노드의 삽입 삭제가 단순 연결 리스트보다는 용이함
    삭제 삽입시 항상 선행 노드를 가리키는 포인터가 필요함

특히 유용한 경우
    - 리스트의 끝에 노드를 삽입하는 연산이 단순 연결 리스트보다 효율적

단순 연결 리스트 -> 첫번째 노드에서부터 링크를 따라서 노드의 개수만큼 진행하여
마지막 노드까지 가야함
원형 연결 리스트 -> 헤드 포인터가 마지막 노드를 가리키도록 구성한다면
상수 시간 안에 리스트의 처음과 끝에 노드를 삽입할 수 있음
    이 변형된 원형 연결 리스트에서 마지막 노드는 헤드 포인터인 head가 가리키고 있고,
    첫 번째 노드는 head->link가 가리키고 있으므로, 리스트의 마지막 노드를 삽입 삭제를 위해
    리스트의 맨 끝까지 힘들게 안가도 된다.

원형 연결 리스트 정의
- 원형 연결 리스트도 원친적으로 헤드 포인터만 있으면 된다. */

// 원형 연결 리스트 처음에 삽입하는 함수
ListNode *insert_first(ListNode *head, element data)
{
    ListNode *node = (ListNode *)malloc(sizeof(ListNode));
    node->data = data;
    if (head == NULL) {
        head = node;
        node->link = head;
    }
    else {
        node->link = head->link;    // (1)
        head->link = node;          // (2)
        return head;    // 변경된 헤드 포인터를 반환한다.
    }
}

/* 원형 리스트 끝에 삽입
앞의 코드에 한 문장만 추가하면 원형 연결 리스트의 끝에 삽입할 수 있다.
즉 원형 연결 리스트는 어차피 원형으로 이루어져 있기 때문에 어디가 처음이고 어디가 끝이지는
불분명하다. 따라서 head의 위치만 새로운 노드로 바꾸어주면 새로운 노드가 마지막 노드가 된다. */

// 원형 연결 리스트의 끝에 삽입하는 함수
ListNode *insert_last(ListNode *head, element data)
{
    ListNode *node = (ListNode *)malloc(sizeof(ListNode));
    node->data = data;
    if (head == NULL) {
        head = node;
        node->link = head;
    }
    else {
        node->link = head->link;    // (1)
        head->link = node;          // (2)
        head = node;                // (3)
    }
    return head;    // 변경된 헤드 포인터를 반환한다.
}