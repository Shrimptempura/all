/* 트리의 응용 : 디렉토리 용량 계산
이진 트리 순회는 컴퓨터 디렉토리의 용량을 계산하는데 사용될 수 있다.
단 이진 트리를 사용하기 때문에 하나의 디렉토리 안에 다른 디렉토리가 2개를 초과하면 안된다.

하나의 디렉토리 안에 다른 디렉토리가 있을 수 있으므로 먼저 서브 디렉토리의 용량을 모두 계산한
다음에 루트 디렉토리의 용량을 계산하여야 할 것이다. 따라서 후위 순회를 사용해야 한다.

후위 순회를 사용하되 순환 호출하는 순회 함수가 용량을 반환해야 한다. 따라서 순회 함수를 조금
변경한다. 프로그램의 간단을 위해 트리의 노드는 정적 생성이지만 실제로는 동적 생성이 좋다. */

// 디렉토리 용량 계산 프로그램
#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int data;
    struct TreeNode *left, *right;
} TreeNode;

int calc_dir_size(TreeNode *root)
{
    int left_size, right_size;
    if (root == NULL) return 0;

    left_size = calc_dir_size(root->left);
    right_size = calc_dir_size(root->right);
    return (root->data + left_size + right_size);
}

int main(void)
{
    TreeNode n4 = {500, NULL, NULL};
    TreeNode n5 = {200, NULL, NULL};
    TreeNode n3 = {100, &n4, &n5};
    TreeNode n2 = {50, NULL, NULL};
    TreeNode n1 = {0, &n2, &n3};

    printf("디렉토리의 크기=%d\n", calc_dir_size(&n1));
}