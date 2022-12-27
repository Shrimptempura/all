/* <그래프의 표현 방법>
인접 행렬(adjacency matrix) : 2차원 배열을 사용하여 그래프를 표현한다.
인접 리스트(adjacency list) : 연결 리스트를 사용하는 그래프를 표현한다.

<인접 행렬 : adjacency matrix>
그래프의 점점 수가 n이라면 n * n의 2차원 배열인 인접 행렬 M의 각 원소를
다음의 규칙에 의해 할당함으로써 그래프를 메모리에 표현할 수 있다.

    if(간선 (i, j)가 그래프에 존재)     M[i][j] = 1,
    otherwise                           M[i][j] = 0.

n개의 정점을 가지는 그래프를 인접 행렬로 표현하기 위해서는 간선의 수에 무관하게
항상 n^2개의 메모리 공간이 필요하다. 이에 따라 인접 행렬은 그래프에 간선이 많이 존재하는
밀집 그래프(dense graph)를 표현하는 경우에는 적합하나, 그래프 내에 적은 숫자의 간선만 가지는
희소 그래프(sparse graph)의 경우에는 메모리의 낭비가 크므로 적합하지 않다.

인접행렬을 이용하면 두 정점을 연결하는 간선의 존재 여부를 O(1)시간 안에 즉시 알수 있는 장점이 있다.
반면에 그래프에 존재하는 모든 간선의 수를 알아내려면 인접 행렬 전체를 조사해야 하므로
n^2번의 조사가 필요하게 되어 O(n^2)이다.

<인접 행렬을 이용한 그래프 추상 데이터 타입의 구현>
그래프에 관련된 변수들을 하나의 구조체 GraphType에 정리하도록 하자.
먼저 그래프에 존재하는 정점의 개수 n이 필요하다. 인접 행렬을 이용하여 구현하려면 또한 크기가
n * n인 2차원 배열의 인접행렬이 필요하다. 인접 행렬의 이름을 adj_mat라 한다.

#define MAX_VERTICES 50
typedef struct GraphType {
    int n;      정점의 개수
    int adj_mat[MAX_VERTICES][MAX_VERTICES];
} GraphType;

물론 이런 식으로 구현하면 한정된 개수의 정점까지만 그래프에 삽입할 수 있다. 
만약 동적 배열로 구현한다면 사용자가 정점을 삽입할 때마다 다시 크기를 조정 할 수 있다.
정점을 삽입하는 연산은 n을 하나 증가하면 된다. 정점의 번호는 순차적으로 증가한다고 가정한다.
간선을 삽입하는 연산은 adj_mat[start][end]와 adj_mat[end][start]에 1을 삽입하면 된다.
물론 방향 그래프인 경우에는 adj_mat[start][end]에만 1을 삽입 해야 한다. */

// adj_mat
#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTICES 50

typedef struct GraphType {
    int n;    // 정점의 개수
    int adj_mat[MAX_VERTICES][MAX_VERTICES];
} GraphType;

void init(GraphType *g)
{
    int r, c;
    g->n = 0;
    for (r = 0; r < MAX_VERTICES; r++)
        for (c = 0; c < MAX_VERTICES; c++)
            g->adj_mat[r][c] = 0;
}

void insert_vertex(GraphType *g, int v)
{
    if (((g->n) + 1) > MAX_VERTICES) {
        fprintf(stderr, "그래프: 정점의 개수 초과");
        return;
    }
    g->n++;
}

void insert_edge(GraphType *g, int start, int end)
{
    if (start >= g->n || end >= g->n) {
        fprintf(stderr, "그래프: 정점 오류");
        return;
    }
    g->adj_mat[start][end] = 1;
    g->adj_mat[end][start] = 1;    
}

void print_adj_mat(GraphType *g)
{
    for (int i = 0; i < g->n; i++) {
        for (int j = 0; j < g->n; j++) {
            printf("%2d ", g->adj_mat[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    GraphType *g;
    g = (GraphType *)malloc(sizeof(GraphType));
    init(g);
    for (int i = 0; i < 4; i++)
        insert_vertex(g, i);
    insert_edge(g, 0, 1);
    insert_edge(g, 0, 2);
    insert_edge(g, 0, 3);
    insert_edge(g, 1, 2);
    insert_edge(g, 2, 3);
    print_adj_mat(g);

    free(g);
}