// 이진트리의 3가지 순회
// 중위 순회 LVR
void inorder(TreeNode *root) {
    if (root != NULL) {
        inorder(roor->left);            // 왼쪽 서브트리 순회
        printf("[%d] ", root->data);    // 노드 방문
        inorder(root->right);           // 오른쪽 서브트리 순회
    }
}

// 전위 순회 VLR
void preorder(TreeNode *root) {
    if (root != NULL) {
        printf("[%d] ", root->data);    // 노드 방문
        preorder(root->left);           // 왼쪽 서브트리 순회
        preorder(root->right);          // 오른쪽 서브트리 순회
    }
}
// 후위 순회 LRV
void postorder(TreeNode *root) {
    if (root != NULL) {
        postorder(root->left);          // 왼쪽 서브트리 순회
        postorder(root->right);         // 오른쪽 서브트리 순회
        printf("[%d] ", root->data);    // 노드 방문
    }
}