#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define INF INT_MAX

// 역 이름 배열
const char* stationNames[] = {
    "강남(2호선)", "역삼(2호선)", "선릉(2호선)",
    "삼성(2호선)", "잠실(2호선)",
    "종로3가(1호선)", "종로3가(3호선)"
};

#define N 7  // 정점(역) 개수

// 인접 행렬 (가중치: 소요시간, INF = 연결 없음)
int graph[N][N];

// 초기화
void initGraph() {
    for (int i = 0;i < N;i++) {
        for (int j = 0;j < N;j++) {
            graph[i][j] = INF;
        }
        graph[i][i] = 0;
    }
    // 2호선 구간
    graph[0][1] = graph[1][0] = 2; // 강남-역삼
    graph[1][2] = graph[2][1] = 2; // 역삼-선릉
    graph[2][3] = graph[3][2] = 2; // 선릉-삼성
    graph[3][4] = graph[4][3] = 5; // 삼성-잠실

    // 환승
    graph[5][6] = graph[6][5] = 5; // 종로3가 환승
}

// 다익스트라 알고리즘
void dijkstra(int src, int dest) {
    int dist[N], parent[N];
    bool visited[N];
    for (int i = 0;i < N;i++) {
        dist[i] = INF;
        parent[i] = -1;
        visited[i] = false;
    }
    dist[src] = 0;

    for (int count = 0; count < N - 1; count++) {
        int u = -1, min = INF;
        for (int i = 0;i < N;i++) {
            if (!visited[i] && dist[i] < min) {
                min = dist[i];
                u = i;
            }
        }
        if (u == -1) break;
        visited[u] = true;

        for (int v = 0; v < N; v++) {
            if (!visited[v] && graph[u][v] != INF && 
                        dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
    }

    if (dist[dest] == INF) {
        printf("경로 없음\n");
        return;
    }

    printf("최단 소요 시간: %d분\n", dist[dest]);

    // 경로 복원
    int path[N], len = 0, cur = dest;
    while (cur != -1) {
        path[len++] = cur;
        cur = parent[cur];
    }
    printf("경로: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%s", stationNames[path[i]]);
        if (i > 0) printf(" -> ");
    }
    printf("\n");
}

int main() {
    initGraph();

    int src = 0;   // 강남
    int dest = 4;  // 잠실
    dijkstra(src, dest);

    return 0;
}
