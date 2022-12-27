/* 이진 탐색 트리

이진 트리 기반의 탐색을 위한 자료 구조
컴퓨터 프로그램에서의 탐색 = 레코드(record)의 집합에서 특정한 레코드를 찾아내는 작업
레코드는 하나 이상의 필드(field)로 구성된다.        
        ex) 학생의 레코드 = 이름, 주소, 주민..등의 필드들을 포함

일반적으로 레코드들의 집합을 테이블(table)이라고 한다.
레코드들은 보통 키(key)라고 불리는 하나의 필드에 의해 식벽할 수 있다.

일반적인 경우 어떤 키는 다른 키와 중복되지 않는 고유한 값을 가지며 이러한 키를 사용하여
각각의 레코드들을 구별할 수 있을 것이다. 이러한 키를 주요키(primary key)라 부르며,
학생의 경우, 주민이나 학번이 여기에 포함함. 탐색 작업시 이러한 키가 입력된 특정한 키를 가진 
레코드를 찾는다. -> 이진 탐색 트리는 이러한 탐색 작업을 효율적으로 하기 위한 자료구조


<이진 탐색 트리의 정의>
- 모든 원소의 키는 유일한 키를 가진다.
- 왼쪽 서브 트리 키들을 루트 키보다 작다.
- 오른쪽 서브 트리의 키들은 루트의 키보다 크다.
- 왼쪽과 오른쪽 서브 트리도 이진 탐색 트리이다.

<순환적인 탐색연산>
이진 탐색 트리에서 특정한 키값을 가진 노드를 찾기 위해서는 먼저 주어진 탐색키 값과 루트 노드의 
키 값을 비교한다. 비교한 결과에 따라 다음의 3가지로 나누어진다.
- 비교한 결과가 같으면 탐색이 성공적으로 끝난다.
- 비교한 결과가, 주어진 키 값이 루트 노드의 키값보다 작으면 탐색은 이 루트 노드의
    왼쪽 자식을 기준으로 다시 시작한다.
- 비교한 결과가, 주어진 키 값이 루트 노드의 키값보다 크면 탐색은 이 루트 노드의
    오른쪽 자식을 기준으로 다시 시작한다.

    이진 탐색 트리 탐색 알고리즘(순환적)
search (root, key):
if root == NULL;
    then return NULL;
if key == KEY(root);
    then return root;
    else if key < KEY(root)
        then return search(LEFT(root), k);
        else return search(RIGHT(root), k);
*/

// 순환적인 탐색 함수
TreeNode *search(TreeNode *node, int key)
{
    if (node == NULL) return NULL;
    if (key == node->key) return node;
    else if (key < node->key)
        return search(node->left, key);
    else
        return search(node->right, key);
}

// 반복적인 탐색 연산, 효율성만 따지면 반복적인 함수가 훨씬 우수..
TreeNode *search(TreeNode *node, int key)
{
    while (node != NULL) {
        if (key == node->key) return node;
        else if (key < node->key)
            node = node->left;
        else
            node = node->right;
    }
    return NULL;    // 탐색에 실패했을 경우 NULL 반환
}

/*
반복적인 탐색 함수는 먼저 매개변수 node가 NULL이 아니면 반복을 계속한다.
반복 루프 안에서는 현재 node의 키값이 key와 같은지를 검사한다.
만약 같으면 탐색 성공이므로 현재 노드 포인터를 반환하고 끝낸다.
만약 key가 현재 노드 키값보다 작으면 node 변수를 node의 왼쪽 자식을 가리키도록 변경한다.
또한 key값이 현재 노드 키값보다 크면 node 변수를 node의 오른쪽 자식을 가리키도록 변경한다.

이러한 반복은 node가 결국 단말노드까지 내려가서 NULL값이 될 때까지 계속된다.
만약 반복이 종료되었는데도 아직 함수가 리턴되지 않았다면 탐색이 실패한 것이므로 NULL을 반환한다.
여기서는 함수의 매개변수 node를 직접 사용하였는데, 사실 매개변수는 원본 변수의 복사본이므로
변경하여도 원본 변수에는 별 영향이 없다. 안심하고 사용해도 된다.
*/