/* 이진 탐색 트리에서 삭제 연산
노드를 삭제하는 것은 이진탐색트리에서 가장 복잡한 연산이다.
먼저 노드를 삭제하기 위해서 먼저 노드를 탐색하여야 한다는 것은 삽입과 마찬가지이다.
일단 우리가 삭제하려고 하는 키값이 트리 안에 어디 있는지를 알아야 지울 수 있을 것이다.
노드를 탐색하였으면 다음의 3가지 경우를 고려해야 한다.
    1. 삭제하려는 노드가 단말 노드일 경우
    2. 삭제하려는 노드가 하나의 왼쪽이나 오른쪽 서브 트리중 하나만 가지고 있는 경우
    3. 삭제하려는 노드가 두개의 서브 트리 모두 가지고 있는 경우

1, 2, 3 순으로 난이도가 증가함

<첫 번째 경우: 삭제하려는 노드가 단말 노드일 경우>
단말노드 아래에 더 이상의 노드가 없으므로 가장 쉽게 할수 있다. -> 단말 노드만 지우면 된다.

단말 노드의 부모노드를 찾아서 부모노드안의 링크필드를 NULL로 만들어서 연결을 끊으면 된다.
다음으로 만약 노드를 동적으로 생성했으면 이 단말노드를 동적 메모리 해제시키면 된다.

<두 번째 경우: 삭제하려는 노드가 하나의 서브트리만 가지고 있는 경우>
삭제되는 노드가 왼쪽이나 오른쪽 서브 트리중 하나만 가지고 있는 경우에는 자기 노드는
삭제하고 서브 트리는 자기 노드의 부모 노드에 붙여주면 된다.

<세 번째 경우: 삭제하려는 노드가 두개의 서브트리를 가지고 있는 경우>
서브트리에 있는 어떤 노드를 삭제 노드 위치로 가져올 것인가? 
-> 왼쪽 or 오른쪽 자식을 그냥 가져오면 안됨

302p.. 참고..

p = 부모노드, t = 현재노드, succ = 후계자 노드, succ_p = 후계자 노드의 부모
삭제 함수도 루트 노드 포인터를 변경시키므로 변경된 루트 노드 포인터를 반환한다. */

// 이진 탐색 트리에서의 삭제 함수
// 이진 탐색 트리와 키가 주어지면 키가 저장된 노드를 삭제하고, 새로운 루트 노드를 반환한다.
TreeNode *delete_node(TreeNode *root, int key)
{
    if (root == NULL) return root;
    // 만약 키가 루트보다 작으면 왼쪽 서브 트리에 있는 것임
    if (key < root->key)
        root->left = delete_node(root->left, key);
    // 만약 키가 루트보다 크면 오른쪽 서브 트리에 있는 것임
    else if (key > root->key)
        root->right = delete_node(root->right, key);
    // 키가 루트와 같으면 이 노드를 삭제하면 됨
    else {
        // 첫 번째나 두 번째 경우
        if (root->left == NULL) {
            TreeNode *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            TreeNode *temp = root->left;
            free(root);
            return temp;
        }
        // 세 번째 경우
        TreeNode *temp = min_value_node(root->right);

        // 중외 순회시 후계 노드를 복사한다.
        root->key = temp->key;
        // 중외 순회시 후계 노드를 삭제한다.
        root->right = delete_node(root->right, temp->key);
    }
    return root;
}

/* 위의 코드 중에서 min_value_node() 함수는 주어진 이진 탐색 트리에서 최소 키값을
가지는 노드를 찾아서 반환한다.

TreeNode *min_value_node(TreeNode *node)
{
    TreeNode *current = node;

    // 맨 왼쪽 단말 노드를 찾으러 내려감
    while (current->left != NULL)
        currnet = current->left;

    return current;
}
*/
