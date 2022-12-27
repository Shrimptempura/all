/* 이진트리가 정적으로 만들어짐 -> malloc()을 사용하지 않고 노드를 전역 변수로 정의하여 생성
    = 이 방식은 노드를 간편하게 만들수 있으나 노드의 개수를 실행중에 변경불가임으로
        실제로는 잘 사용되지 않는다. */

// 링크법으로 생성된 이진트리
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TreeNode {
    int data;
    struct TreeNode *left, *right;
} TreeNode;

//      15
// 4          20
// 1       16     25

TreeNode n1 = {1, NULL, NULL};
TreeNode n2 = {4, &n1, NULL};
TreeNode n3 = {16, NULL, NULL};
TreeNode n4 = {25, NULL, NULL};
TreeNode n5 = {20, &n3, &n4};
TreeNode n6 = {15, &n2, &n5};
TreeNode *root = &n6;

// 중위 순회 LVR
void inorder(TreeNode *root) {
    if (root != NULL) {
        inorder(root->left);            // 왼쪽 서브트리 순회
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

// 후위 순회
void postorder(TreeNode *root) {
    if (root != NULL) {
        postorder(root->left);          // 왼쪽 서브트리 순회
        postorder(root->right);         // 오른쪽 서브트리 순회
        printf("[%d] ", root->data);    // 노드 방문
    }
}

int main(void)
{
    printf("중위 순회=");
    inorder(root);
    printf("\n");

    printf("전위 순회=");
    preorder(root);
    printf("\n");

    printf("후위 순회=");
    postorder(root);
    printf("\n");

    return 0;
}