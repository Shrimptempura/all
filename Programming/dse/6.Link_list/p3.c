/* 단순 연결 리스트의 연산 구현

단순 연결 리스트는 원칙적으로 헤드 포인터만 있으면 된다. */

ListNode *head;

/* <삽입 연산 insert_first()>
단순 연결 리스트는 리스트의 처음이나 끝에 새로운 노드를 추가하는 경우가 많다.
매개변수 head는 헤드 포인터이고, value는 새롭게 추가되는 데이터이다. */

ListNode* insert_first(ListNode *head, element value);

/* head가 첫 번째 노드를 가리키기 때문에 리스트의 시작 부분에 노드를 추가하는 것은
비교적 쉽다. 새로운 노드를 하나 생성하고 새로운 노드의 link에 현재 head 값을 저장한 후에,
head를 변경하여 새로 만든 노드를 가리키도록 하면 된다. insert_first()은 변경된 헤드 포인터를
반환한다. 따라서 반환된 값을 헤드포인터에 저장하여야 한다 */

head -> [10][] -> [20][NULL]
p -> [5][]  

    head -> [10][]
p -> [5][] -> [10][] -> [20][NULL]

head, p -> [5][] -> [10][] -> [20][NULL]

/* 연결 리스트 삽입 알고리즘, 윗 코드

insert_first(head, value):      L : 연결리스트, value : 추가할 값
1. p <- malloc()
2. p->data <- value
3. p->link <- haed
4. head <- p
5. return head

1. 동적 메모리 할당을 통하여 새로운 노드 p를 생성한다.
2. p->data에 value를 저장한다.
3. p->link를 현재의 head 값으로 변경한다.
4. head를 p값으로 변경한다.
5. 변경된 헤드 포인터 반환 */

// 단순 연결리스트의 삽입함수
ListNode* insert_first(ListNode *head, int value)
{
    ListNode *p = (ListNode *)malloc(sizeof(ListNode));
    p->data = value;
    p->link = head;     // 헤드 포인터의 값을 복사
    head = p;           // 헤드 포인터 변경
    return head;        // 변경된 헤드 포인터 반환
}

/* 삽입 연산 insert()
insert()은 연결 리스트의 중간에 새로운 노드를 추가한다. 이 때 반드시 삽입되는 위치의
선행 노드를 알아야 삽입할 수 있다. 

연결리스트 삽입 알고리즘 1
insert(head, pre, value):           list : 연결리스트, pre : 선행 노드, value : 추가할 값
1. p <- malloc()
2. p->data <- value
3. p->link <- pre->link
4. pre->link <- p
5. return head

1. 새로운 노드를 생성하여 변수 p로 가리킨다.
2. p의 데이터 필드에 "20"을 저장한다.
3. p의 링크 필드가 노드 "30"을 가리키게 변경한다.
4. "10"의 링크 필드가 "20"을 가리키도록 한다.
5. 변경된 헤드포인터 반환 */

// 단순 연결 리스트의 삽입함수
// 노드 pre 뒤에 새로운 노드 삽입
ListNode* insert(Listnode *head, ListNode *pre, element value)
{
    ListNode *p = (ListNode *)malloc(sizeof(ListNode));
    p->data = value;
    p->link = pre->link;
    pre->link = p;

    return head;
}

// delete_first() 함수
// 첫 번째 노드를 삭제하는 함수 delete_frist()는 다음의 원형을 가진다.

ListNode* delete_first(ListNode *head)

/* 연결 리스트 삭제1 알고리즘
delete_first(head)
1. removed <- head
2. head <- head->link
3. free(removed)
4. return head

1. 헤드 포인터의 값을 removed에 복사한다.
2. 헤드 포인터의 값을 head->link로 변경한다.
3. removed가 가리키는 동적 메모리를 반환한다.
4. 변경된 헤드 포인터를 반환한다. */

// 단순 연결리스트의 삭제함수
ListNode* delete_first(Listnode *head)
{
    ListNode *removed;
    if (head == NULL) return NULL;
    removed = head;
    head = removed->link;
    free(removed);

    return head;
}


/* head -? [10][] -> [20][]
            pre -> [20][] -> [30][] -> [40][] ->
노드 30을 삭제한다고 가정, 20의 포인터만 40으로 이어주고, 30노드는 빼줌

연결리스트 삭제2 알고리즘
delete(head, pre):
1. removed <- pre->link
2. pre->link <- removed->link
3. free(removed)
4. return head

1. 삭제할 노드를 찾는다.
2. 노드 "10"의 링크 필드가 노드 "30"을 가리키게 한다.
3. 삭제할 노드의 동적 메모리를 반납한다.
4. 변경된 헤드 포인터를 반환한다. */

// 단순 연결리스트의 삭제함수
// pre가 가리키는 노드의 다음 노드를 삭제한다.
ListNode* delete(ListNode *head, ListNode *pre)
{
    ListNode *removed;
    removed = pre->link;
    pre->link = removed->link;
    free(removed);
    return head;
}

// print_list()
// 리스트 방문 알고리즘
void print_list(ListNode *head)
{
    for (ListNode *p = head; p != NULL; p = p->link)
        printf("%d->", p->data);
    printf("NULL \n");
}