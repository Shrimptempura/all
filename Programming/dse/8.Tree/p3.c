/*
이진트리의 순회
트리를 순회? -> 이진트리에 속하는 모든 노드를 한 번씩 방문
루트 : V    왼 : L    오른 : R

전위 순회(preorder traversal) : VLR
중위 순회(inorder traversal) : LVR
후위 순회(postorder traversal) : LRV

<전위 순회(preorder traversal) : VLR>
preorder(x) : 
1. if x != NULL                     노드 x가 NULL이면 더 이상 순환호출을 하지 않는다.
2.       then print DATA(x);
3.            preorder(LEFT(x));
4.            preoredr(RIGHT(x));

* VLR)
1) 루트방문후, 루트기준 왼쪽 줄기부터 탐
2) 2번 노드의 왼쪽자식의 왼쪽자식..
3) 단말노드 방문후 루트기준 왼쪽 줄기의 오른쪽 단말 방문
4) 루트 기준 왼쪽 줄기 방문끝나면 오른쪽 줄기로 옮김
5) 루트 기준 오른쪽 자식단말 방문 후..(이제 이놈을 루트라 지칭)
6) 이어진 간선 그대로 왼쪽 조짐
7) 단말 됬을시 오른쪽 방문
= 루트기준 왼쪽 줄기의 왼쪽 조짐(레벨 오름순), L(왼쪽 줄기의 오른쪽 조짐),
    오른쪽 줄기 VLR;


<중위 순회(inoreder traversal) : LVR>
inorder(x) : 
1. if x != NULL                     노드 x가 NULL이면 더 이상 순환호출을 하지 않는다.
2.       then inorder (LEFT(x));
3.            inorder DATA(x)
4.            inoredr(RIGHT(x));

* LVR)
1) 가장 왼쪽 단말노드 방문
2) 그 노드의 루트 방문
3) 그 노드의 오른쪽 자식노드 방문
4) 2번의 부모 노드 방문
5) 반복하여 루트노드방문
6) 루트 노드의 오른쪽 자식노드가 아니라, 루트 노드의 오른쪽 줄기 기준 가장 윗 왼쪽노드 방문
7) 그 노드의 루트 방문 (중요)
8) 노드의 오른쪽 자식이 아닌, 존재하는 왼쪽 노드부터 방문
9) 단말 노드인 경우 그 노드의 루트 방문, 오른쪽 방문
= 루트 기준 왼쪽 줄기 조짐, 오른 줄기 넘어가도 LVR(자식있으면 V처리)


<후위 순회(postorder traversal) : LRV)

postorder(x) : 
1. if x != NULL                     노드 x가 NULL이면 더 이상 순환호출을 하지 않는다.
2.       then postorder(LEFT(x));
3.            postorder(RIGHT(x));
4.            print DATA(x);

* LRV)
1) 맨왼쪽 단말 노드 방문
2) 그 노드의 오른쪽 방향 노드 방문
3) 부모 방문
4) 부모기준 오른쪽 방문
5) 또 부모 방문
6) 루트노드가 가장 마지막 방문, 루트 노드의 왼쪽 줄기 다 방문 후 
    오른쪽 줄기의 가장 낮은 레벨 왼쪽 노드 방문
7) 그 노드의 오른쪽 방향 노드 방문이 아니라 같은 줄기의 왼쪽 계속 싹다 방문
8) 오른 루트 오른 반복
= 루트기준 왼쪽 줄기 LRV조짐, 루트 마지막, 오른쪽 줄기 기준 LRV, V(루트)

*/