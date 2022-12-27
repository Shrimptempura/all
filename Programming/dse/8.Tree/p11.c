/* 스레드 이진 트리
이진 트리 순회는 순환 호출을 사용한다. 
순환 호출은 하무를 호출해야 되므로 상당히 비효율적일 수가 있다.

이진 트리 순회도 노드의 개수가 많아지고 트리의 높이가 커지게 되면 상당히 비효율적일 수도 있다.
따라서 순회를 순환 호출 업이, 즉 스택의 도움 없이 할 수 는 없는 것일까?

우리는 이진 트리의 노드에 많은 NULL 링크들이 존재함을 알고 있다.
만약 트리의 노드의 개수를 n개라고 하면 각 노드당 2개의 링크가 있으므로 총 링크의 개수는 2n이 되고
이들 링크 중에서 n - 1의 링크들이 루트 노드를 제외한 n - 1개의 다른 노드들을 가리킨다.

따라서 2n개중에서 n - 1은 NULL 링크가 아니지만 나머지 n + 1개의 링크는 NULL임을 알 수 있다.
따라서 하나의 아이디어는 이들 NULL 링크를 잘 사용하여 순환 호출 없이도 트리의 노드들을 
순회할 수 있도록 하자는 것이다.


이들 NULL 링크에 중위 순회 시에 선행 노드인 중위 선행자(inorder predecessor)나 
중위 순회시에 후속 노드인 중위 후속자(inorder successor)를 저장시켜 놓은 트리가
스레드 이진 트리(threaded binary tree)이다. 스레드(thread), 즉 실을 이용하여 노드들은
순회 순서대로 연결시켜 놓은 트리이다.

여기서 문제를 간단하게 하기 위하여 중위 후속자만 저장되어 있다고 가정하자.

그러나 만약 이런식으로 NULL 링크에 스레드가 저장되면 링크에 자식을 가리키는 포인터가
저장되어 있는지 아니면 NULL이 저장되어야 하는데 대신 스레드가 저장되어 있는지를 구별해주는
태그 필드가 필요하다. 따라서 노드의 구조가 다음과 같이 변경되어야 한다.

typedef struct TreeNode {
    int data;
    struct TreeNode *left, *right;
    int is_thread;      만약 오른쪽 링크가 스레드이면 TRUE
} TreeNode;

따라서 is_thread가 TRUE이면 right는 중위 후속자이고 is_thread가 FALSE이면 오른쪽 자식을
가리키는 포인터가 된다. 만약 스레드 이진 트리가 구성되었다고 가정하였을 경우,
중위 순회 연산은 어떻게 변경되어야 할까?

먼저 노드 p의 중위 후속자를 반환하는 함수 find_successor를 제작하자.
find_successor는 p의 is_thread가 TRUE로 되어 있으면 바로 오른쪽 자식이 중위 후속자가 되므로
오른쪽 자식을 반환한다. 만약 오른쪽 자식이 NULL이면 더 이상 후속자가 없다는 것이므로 NULL를
반환한다.

만약 is_thread가 TRUE가 아닌 경우는 서브 트리의 가장 왼쪽 노드로 가야한다.
따라서 왼쪽 자식이 NULL이 될 때까지 왼쪽 링크를 타고 이동한다.

TreeNode *find_successor(TreeNode *p)
{
    // q는 p의 오른쪽 포인터
    TreeNode *q = p->right;
    // 만약 오른쪽 포인터가 NULL이거나 스레드이면 오른쪽 포인터를 반환
    if (q == NULL || p->is_thread == TRUE)
        return q;

    // 만약 오른쪽 자식이면 다시 가장 왼쪽 노드로 이동
    while (q->left != NULL) q = q->left;
    return q;
}

스레드 이진 트리에서 중위 순회를 하는 함수 thread_inorder를 제작하여 보자.
먼저 중위 순회는 가장 왼쪽 노드부터 시작하기 때문에 따라서 왼쪽 자식이 NULL이 될 때까지
왼쪽 링크를 타고 이동한다. 다음으로 데이터를 출력하고 중위 후속자를 찾는 함수를 호출하여
후속자가 NULL이 아니면 계속 루프를 반복한다.

void thread_inorder(TreeNode *t)
{
    TreeNode *q;

    q = t;
    while (q->left) q = q->left;    // 가장 왼쪽 노드로 간다.
    do {
        printf("%c -> ", q->data);  // 데이터 출력
        q = fine_successor(q);      // 후속자 함수 호출
    } while (q);                    // NULL이 아니면
}
*/