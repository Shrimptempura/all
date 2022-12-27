/* 트리
- 계층적(hierarachical structure)를 가지는 구조
- 한 개 이상의 노드로 이루어진 유한 집합
- 간선(edge) : 루트와 서브트리가 이어진 선
- 단말 노드(terminal node or leaf node) : 자식 노드가 없는 노드
- 비단말 노드(nonterminal node);
- 차수(degree) : 어떤 노드가 가지고 있는 자식 노드의 개수
- 레벨(level) : 트리의 각층에 번호를 매기는 것, 루트부터 1

<이진 트리(binary tree)>
- 모든 노드가 2개의 서브 트리를 가지고 있음(최대 2개 까지의 자식 노드, 모든 노드의 차수 2이하)
- 공집합도 이진 트리

<이진트리의 성질>
- n개의 노드를 가진 이진트리는 정확하게 n-1의 간선을 가진다.
    이진트리에서의 노드는 루트를 제외하면 정확하게 하나의 부모노드를 가진다.
    (부모와 자식간 하나의 간선만 존재)

- 높이가 h인 이진트리의 경우, 최소 h개의 노드를 가지며 최대 2^h-1개의 노드를 가진다.

- n개의 노드를 가지는 이진트리의 높이는 최대 n이거나 최소 [log2(n+1)]이 된다.
    레벨 당 최소 하나의 노드는 있어야 하므로 높이가 n을 넘을 수 없다.

<이진트리의 분류>
- 포화 이진 트리(full binary tree)
- 완전 이진 트리(complete binary tree)
- 기타 이진 트리

포화 이진 트리 : 트리의 각 레벨에 노드가 꽉 차있는 이진트리
    높이가 k인 포화 이진트리는 정확하게 2^k-1개의 노드를 가진다.

포화 이진 트리의 노드에 번호를 붙이는 방법
- 레벨 단위(루트 노드)로 왼쪽에서 오른쪽으로 번호를 붙인다.

완전 이진트리
- 높이가 k일 때 레벨 1부터 k-1까지는 노드가 모두 채워져 있고 마지막 레벨 k에서는 
    왼쪽부터 오른쪽으로 노드가 순서대로 채워져 있는 이진트리

* 마지막 레벨에서는 노드가 꽉차있지 않아도 되지만 중간에 빈곳이 있어서는 안된다. */