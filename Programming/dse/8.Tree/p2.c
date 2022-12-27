/* 이진 트리의 표현
1) 배열을 이용한 방법
2) 포인터를 이용한 방법

<배열 표현법>
주로 포화 이진트리나 완전 이진트리에서 많이 쓰임
저장하고자 하는 이진트리를 일단 완전 이진 트리라고 가정하고 이진트리의 깊이가 k이면 2^k-1개의
공간을 연속적으로 할당한후, 완전 이진트리의 번호대로 노드들을 저장한다.
    (비어 있으면 빈대로 나둠)

부모와 자식의 인덱스 사이의 공식
- 노드 i의 부모 노드 인덱스 = i/2;
- 노드 i의 왼쪽 자식 노드 인덱스 = 2i;
- 노드 i의 오른쪽 자식 노드 인덱스 = 2i+1;

<링크 표현법>
트리에서의 노드가 구조체로 표현되며, 각 노드가 포인터를 가지고 있어서 포인터를 이용하여
노드와 노드를 연결하는 방법이다.
    [왼쪽자식노드][데이터][오른쪽자식노드]
하나의 노드가 3개의 필드를 가지는데, 데이터를 저장하는 필드와 왼쪽 자식 노드와 
오른쪽 자식노드를 가리키는 2개의 포인터 필드를 가진다. 이 2개의 포인터를 이용하여
부모노드와 자식노드를 연결한다. */

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TreeNode {
    int data;
    struct TreeNode *left, *right;
} TreeNode;
//      n1
//     / |
//   n2  n3

int main(void)
{
    TreeNode *n1, *n2, *n3;
    n1 = (TreeNode *)malloc(sizeof(TreeNode));
    n2 = (TreeNode *)malloc(sizeof(TreeNode));
    n3 = (TreeNode *)malloc(sizeof(TreeNode));
    n1->data = 10;      // 첫 번째 노드 생성
    n1->left = n2;
    n1->right = n3;
    n2->data = 20;      // 두 번째 노드 생성
    n2->left = NULL;
    n2->right = NULL;
    n3->data = 30;      // 세 번째 노드 생성
    n3->left = NULL;
    n3->right = NULL;
    free(n1); free(n2); free(n3);

    return 0;
}