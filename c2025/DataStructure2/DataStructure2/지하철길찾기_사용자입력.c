//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <limits.h>
//#include <stdbool.h>
//
//#define N 7   // �� ���� (����~��� + ����3��, ����5��)
//#define INF 1000000
//
//// �� �̸� ����
//const char* stations[N] = {
//    "����(2ȣ��)", "����(2ȣ��)", "����(2ȣ��)", "�Ｚ(2ȣ��)", "���(2ȣ��)",
//    "����3��(1ȣ��)", "����5��(1ȣ��)"
//};
//
//// ����ö �׷��� (����ġ: �̵� �ð�, INF = ���� ����)
//int graph[N][N];
//
//// ���ͽ�Ʈ�� �˰���
//void dijkstra(int start, int end) {
//    int dist[N], parent[N];
//    bool visited[N] = { false };
//
//    for (int i = 0; i < N; i++) {
//        dist[i] = INF;
//        parent[i] = -1;
//    }
//    dist[start] = 0;
//
//    for (int i = 0; i < N - 1; i++) {
//        int min = INF, u = -1;
//        for (int j = 0; j < N; j++) {
//            if (!visited[j] && dist[j] < min) {
//                min = dist[j];
//                u = j;
//            }
//        }
//        if (u == -1) break; // �� �̻� �� �� ����
//        visited[u] = true;
//
//        for (int v = 0; v < N; v++) {
//            if (!visited[v] && graph[u][v] != INF && dist[u] + graph[u][v] < dist[v]) {
//                dist[v] = dist[u] + graph[u][v];
//                parent[v] = u;
//            }
//        }
//    }
//
//    if (dist[end] == INF) {
//        printf("����� ��ΰ� �����ϴ�.\n");
//        return;
//    }
//
//    printf("\n�ִ� �ҿ� �ð�: %d��\n", dist[end]);
//
//    // ��� ���� (�ڿ��� ������ ����)
//    int path[N], count = 0, cur = end;
//    while (cur != -1) {
//        path[count++] = cur;
//        cur = parent[cur];
//    }
//
//    printf("���: ");
//    for (int i = count - 1; i >= 0; i--) {
//        printf("%s", stations[path[i]]);
//        if (i > 0) printf(" -> ");
//    }
//    printf("\n");
//}
//
//// �� �̸����� �ε��� ã��
//int findStationIndex(const char* name) {
//    for (int i = 0; i < N; i++) {
//        if (strstr(stations[i], name)) { // �κ� ���ڿ� �˻�
//            return i;
//        }
//    }
//    return -1;
//}
//
//int main() {
//    // �׷��� �ʱ�ȭ
//    for (int i = 0; i < N; i++)
//        for (int j = 0; j < N; j++)
//            graph[i][j] = (i == j) ? 0 : INF;
//
//    // 2ȣ��
//    graph[0][1] = graph[1][0] = 2; // ����-����
//    graph[1][2] = graph[2][1] = 2; // ����-����
//    graph[2][3] = graph[3][2] = 2; // ����-�Ｚ
//    graph[3][4] = graph[4][3] = 5; // �Ｚ-���
//
//    // 1ȣ��
//    graph[5][6] = graph[6][5] = 5; // ����3��-����5��
//
//    // ȯ�� (����: �Ｚ-����3�� ���� ȯ�� 15��)
//    graph[3][5] = graph[5][3] = 15;
//
//    char startName[50], endName[50];
//    printf("��߿� �Է�: ");
//    scanf("%s", startName);
//    printf("������ �Է�: ");
//    scanf("%s", endName);
//
//    int start = findStationIndex(startName);
//    int end = findStationIndex(endName);
//
//    if (start == -1 || end == -1) {
//        printf("�Է��� �� �̸��� ã�� �� �����ϴ�.\n");
//        return 1;
//    }
//
//    dijkstra(start, end);
//
//    return 0;
//}
