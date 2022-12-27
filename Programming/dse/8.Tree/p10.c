/* 이진트리와 관련된 추가적인 연산들

<노드의 개수>
탐색 트리안의 노드의 개수를 세어 표시한다.
노드의 개수를 세기 위해서는 트리안의 노드들을 전체적으로 순회하여야 한다.
각각의 서브트리에 대하여 순환 호출한 다음, 반환되는 값에 1을 더하여 반환하면 된다.
    
    이진 탐색 트리에서 노드 개수를 구하는 알고리즘
get_node_count(x):
if x != NULL then
    return 1+get_count(x.left) + get_count(x.right); */

int get_node_count(TreeNode *node)
{
    int count = 0;
    if (node != NULL)
        count = 1 + get_node_count(node->left) + get_node_count(node->right)
    
    return count;
}

/*
<단말 노드 개수 구하기>
트리안의 노드들을 전체적으로 순회해야 한다.
순회하면서 만약 왼쪽 자식과 오른쪽 자식이 동시에 0이 되면 단말 노드이므로 1을 반환한다.
만약 그렇지 않으면 비단말 노드이므로 각각의 서브트리에 대하여 순환 호출한 다음,
반환되는 값을 서로 더하면 된다

    이진 탐색 트리에서 단말노드 개수 구하는 알고리즘
get_leaf_count(T):
if T != NULL then
    if T.left == NULL and T.right == NULL
    then return 1;
    else return get_leaf_count(T.left) + get_leaf_count(T.right); */

int get_leaf_count(TreeNode *node)
{
    int count = 0;
    if (node != NULL) {
        if (node->left == NULL && node->right == NULL)
            return 1;
        else
            count = get_leaf_count(node->left) + get_leaf_count(node->right);
    }
    return count;
}

/*
<높이 구하기>
트리의 높이를 구하는 알고리즘이 가장 까다롭다. 순환 호출을 완벽하게 이해하고 있어야 함
각 서브 트리에 대하여 순환 호출을 하여야 한다.
순환 호출이 끝나면 각각 서브 트리로부터 서브 트리의 높이가 반환되어 왔을 것이다.

서브 트리의 반환값을 서로 더하는 것은 의미가 없음. 트리의 높이가 서브 트리의 높이를 더해서
얻어지는 것은 아니기 때문에. 여기서는 서브 트리들의 반환값 중에서 최대값을 구하여 반환해야 한다. 

    이진 탐색 트리에서 높이 구하는 알고리즘
get_height(T):
if T != NULL
    return 1 + max(get_height(T.left), get_height(T.right)); */

int get_height(TreeNode *node)
{
    int height = 0;
    if (node != NULL)
        height = 1 + max(get_height(node->left), get_height(node->right));
    return height;
}
