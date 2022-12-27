/*
이진 트리는 수식 트리(expression tree)를 처리하는데 사용될 수 있다.
- 전위순회, 중위순회, 후위순회

수식 트리 계산 알고리즘
evaluate(exp):
1. if exp == NULL
2.    then return 0;
3.    else x<-evaluate(exp.left);
4.         y<-evaluate(exp.right);
5.         op<-exp.data;
6.         return (x op y);

1. 만약 수식 트리가 공백 상태이면
2. 그냥 복귀한다.
3. 그렇지 않으면 왼쪽 서브 트리를 계산하기 위하여 evaluate를 다시 순환 호출한다.
    이때 매개변수는 왼쪽 자식 노드가 된다.
4. 똑같은 식으로 오른쪽 서브 트리를 계산한다.
5. 루트 노드의 데이터 필드에서 연산자를 추출한다.
6. 추출된 연산자를 가지고 연산을 수행해서 반환한다. */

// 수식 트리 계산 프로그램
#include <stdio.h>
#include <stdlib.h>
// #include <memory.h>

typedef struct TreeNode {
    int data;
    struct TreeNode *left, *right;
} TreeNode;

//      +
// *          +
// 1   4   16    25
TreeNode n1 = {1, NULL, NULL};
TreeNode n2 = {4, NULL, NULL};
TreeNode n3 = {'*', &n1, &n2};
TreeNode n4 = {16, NULL, NULL};
TreeNode n5 = {25, NULL, NULL};
TreeNode n6 = {'+', &n4, &n5};
TreeNode n7 = {'+', &n3, &n6};
TreeNode *expp = &n7;

int evaluate(TreeNode *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return root->data;
    else {
        int op1 = evaluate(root->left);
        int op2 = evaluate(root->right);
        printf("%d %c %d을 계산합니다.\n", op1, root->data, op2);
        switch (root->data) {
            case '+':
                return op1 + op2;
            case '-':
                return op1 - op2;
            case '*':
                return op1 * op2;
            case '/':
                return op1 / op2;
        }
    }
    return 0;
}

int main(void)
{
    printf("수식의 값은 %d입니다. \n", evaluate(expp));
    return 0;
}