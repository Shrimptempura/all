// 이진 탐색 트리에서 단말노드 개수 구하는 알고리즘
int get_leaf_count(TreeNode *node)
{
    int count = 0;

    if (node != NULL) {
        if (node -> left == NULL && node -> right == NULL)
            return 1;
        else
            count = get_leaf_count(node -> left) + get_leaf_count(node -> right);
    }
    return count;
}