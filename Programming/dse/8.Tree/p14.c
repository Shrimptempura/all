/* 이진탐색트리에서 삽입연산
이진 탐색 트리에 원소를 삽입하기 위해서는 먼저 탐색을 수행하는 것이 필요하다.
-> 이진 탐색 트리에서는 같은 키값을 갖는 노드가 없어야 하고
-> 탐색에 실패한 위치가 바로 새로운 노드를 삽입하는 위치가 되기 때문이다.

새로운 노드는 항상 단말노드에 추가된다. 우리는 단말 노드를 발견할 때까지 루트에서
키를 검색하기 시작한다. 단말 노드가 발견되면 새로운 노드가 단말 노드의 하위 노드로 추가된다.
알고리즘은 순환적으로 기술되었다

    이진탐색트리 삽입 알고리즘
insert (root, n):
if KEY(n) == KEY(root)              // root와 키가 같으면
    then return;                    // return
else if KEY(n) < KEY(root) then     // root보다 키가 작으면
    if LEFT(root) <- n;             // root의 왼쪽 자식이
        then LEFT(root) <- n;       // 없으면 n이 왼쪽 자식
        else insert(LEFT(root), n); // 있으면 순환 호출
else                                // root보다 키가 크면
    if RIGHT(root) == NULL
        then RIGHT(root) <- n;
        else insert(RIGHT(root), n);
*/

// 이진트리 삽입 프로그램
// 매개변수 root는 이진 탐색 트리의 루트 노드를 가리킨다. 삽입 함수에서는 루트 노드 포인터가
// 변경되어야 하므로 변경된 루트 포인터를 반환하였다. Key는 삽입할 탐색키값을 의미한다.
TreeNode *insert_node(TreeNode *node, int key)
{
    // 트리가 공백이면 새로운 노드를 반환한다.
    if (node == NULL) return new_node(key);

    // 그렇지 않으면 순환적으로 트리를 내려간다.
    if (key < node->key)
        node->left = insert_node(node->left, key);
    else if (key > node->key)
        node->right = insert_node(node->right, key);
    
    // 변경된 루트 포인터를 반환한다.
    return node;
}

/* 위에서 new_node() 함수는 다음과 같이 동적으로 메모리를 할당하여 새로운 노드를 생성하여 
반환하는 유틸리티 함수이다.

TreeNode *new_node(int item)
{
    TreeNode *temp = (TreeNode *)malloc(sizeof(TreeNode));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
*/