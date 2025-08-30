#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define INF INT_MAX

// �� �̸� �迭
const char* stationNames[] = {
    "����(2ȣ��)", "����(2ȣ��)", "����(2ȣ��)",
    "�Ｚ(2ȣ��)", "���(2ȣ��)",
    "����3��(1ȣ��)", "����3��(3ȣ��)"
};

#define N 7  // ����(��) ����

// ���� ��� (����ġ: �ҿ�ð�, INF = ���� ����)
int graph[N][N];

// �ʱ�ȭ
void initGraph() {
    for (int i = 0;i < N;i++) {
        for (int j = 0;j < N;j++) {
            graph[i][j] = INF;
        }
        graph[i][i] = 0;
    }
    // 2ȣ�� ����
    graph[0][1] = graph[1][0] = 2; // ����-����
    graph[1][2] = graph[2][1] = 2; // ����-����
    graph[2][3] = graph[3][2] = 2; // ����-�Ｚ
    graph[3][4] = graph[4][3] = 5; // �Ｚ-���

    // ȯ��
    graph[5][6] = graph[6][5] = 5; // ����3�� ȯ��
}

// ���ͽ�Ʈ�� �˰���
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
        printf("��� ����\n");
        return;
    }

    printf("�ִ� �ҿ� �ð�: %d��\n", dist[dest]);

    // ��� ����
    int path[N], len = 0, cur = dest;
    while (cur != -1) {
        path[len++] = cur;
        cur = parent[cur];
    }
    printf("���: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%s", stationNames[path[i]]);
        if (i > 0) printf(" -> ");
    }
    printf("\n");
}

int main() {
    initGraph();

    int src = 0;   // ����
    int dest = 4;  // ���
    dijkstra(src, dest);

    return 0;
}
