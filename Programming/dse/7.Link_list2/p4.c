/* 이중 연결 리스트
단순 연결 리스트에서 어떤 노드에서 후속 노드를 찾기는 쉽지만, 선행 노드를 찾으려면 구조상
아주 어렵다. 원형 리스트라고 하더라도 거의 전체 노드를 거쳐서 돌아와야 한다.
따라서 응용 프로그램에서 특정 노드에서 양방향으로 자유롭게 움직일 필요가 있다면
단순 연결 리스트 구조는 부적합하다. 이중 연결 리스트는 이러한 문제점을 해결하기 위해 만들어졌다.

이중 연결 리스트는 하나의 노드가 선행 노드와 후속 노드에 대한 두 개의 링크를 가지는 리스트이다.
링크가 양방향이므로 양방향으로 검색이 가능하다.
단점) 공간을 많이 차지하고 코드가 복잡하다. 그럼에도 장점이 뛰어나 많이 쓰임

실제 응용에서는 이중 연결 리스트와 원형 연결 리스트를 혼합한 형태가 많이 사용된다.
또 헤드 노드라는 특별한 노드를 추가하는 경우가 많다. 헤드 포인터와는 다르다
헤드 포인터는 리스트의 첫 번째 노드를 가리키는 포인터이고,
헤드 노드는 데이터를 가지고 있지 않은 특별한 노드를 추가하는 것이다.

헤드 노드가 존재하면 삽입, 삭제 알고리즘을 간편하게 하기 위해서 존재한다.

이중 연결 리스트에서의 노드는 3개의 필드(왼쪽 링크 필드, 데이터 필드, 오른쪽 링크 필드)
링크 필드는 포인터로 이루어짐

임의의 노드를 가리키는 포인터를 p라고 하면, 
p = p->llink->rlink = p->rlink->llink
즉 앞뒤로 똑같이 이동할 수 있음을 나타낸다. 이러한 관계는 공백 리스트에서도 성립한다.
즉 헤드 노드가 존재하기 때문에 공백 리스트의 경우, 다음과 같다.
  |--> 헤드노드 ----|
  |                 v
[       ][       ][        ]
  ^                  |
  |-------------------

노드의 구조를 구조체를 이용하여 정의하면 다음과 같다.
노드의 왼쪽 링크 필드 llink는 선행 노드를 가리키며, 오른쪽 링크 필드 rlink는 후속 노드를 가리킨다

typedef in element;
typedef struct DListNode {
    element data;
    struct DListNode *llink;
    struct DListNode *rlink;
} DListNode; */