// 이진 검색 트리에서 높이 구하는 알고리즘
int get_height(TreeNode *node)
{
    int height = 0;

    if (node != NULL)
        height = 1 + max(get_height(node -> left), get_height(node -> right));

    return height;
}