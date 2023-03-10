/* 
그래프는 정점(vertex)와 간선(edge)들의 유한 집한이라 할 수 있다.
수학적으로 G = (V, E)

정점 : 여러 가지 특성을 가질 수 있는 객체
간선 : 이러한 정점들 간의 관계

V(G1) = {0, 1, 2, 3}        정점 0 1 2 3이 있는 그래프
E(G1) = {(0, 1), (0, 2), (0, 3), (1, 2)}    괄호끼리 연결되어 있는 그래프

()는 무방향 그래프
<>는 방향 그래프 ex) <0, 1>  0->1

네트워크 : 간선에 비용이나 기중치가 할당된 그래프 (가중치 그래프(weighted graph))

부분 그래프(subgraph) : 어떤 그래프의 정점의 일부와 간선의 일부로 이루어진 그래프
그래프 G의 부분 그래프 S는 다음과 같은 수식을 만족시키는 그래프이다
    V(S) (= V(G)        E(S) (= E(G)

정점의 차수
그래프에서의 인접 정점(adjacent vertex)란 간선에 의해 직접 연결된 정점을 뜻한다.
무방향 그래프에서의 정점의 차수(degree)는 그 정점에 인접한 정점의 수를 말한다.

무방향 그래프에서 모든 정점의 차수를 합하면 간선 수의 2배가 된다.
이것은 하나의 간선이 두개의 정점에 인접하기 때문이다.

방향 그래프에서는 외부에서 오늘 간선의 개수를 진입 차수(in-degree) 
외부로 향하는 간선의 개수를 진출 차수(out-degree)라 한다.

경로
단순 경로(simple path) : 경로 중에서 반복되는 간선이 없을 경우
사이클(cycle) : 단순 경로의 시작 정점과 종료 정점이 동일한 경우

연결 그래프
무방향 그래프 G에 있는 모든 정점쌍에 대하여 항상 경로가 존재한다면 G는 연결되었다며 하며
이러한 무방향 그래프 G를 연결 그래프(connected graph)라 한다.
그렇지 않은 그래프는 비연결 그래프(unconnected graph)라 한다.
트리는 그래프의 특수한 형태로서 사이클을 가지지 않는 연결 그래프이다.

완전 그래프(complete graph)
그래프에 속해있는 모든 정점이 서로 연결되어 있는 그래프
무방향 완전 그래프의 정점 수를 n이라고 하면, 하나의 정점은 n - 1개의 다른 정점으로 연결되므로
간선의 수는 n * (n - 1) / 2이다.
*/
