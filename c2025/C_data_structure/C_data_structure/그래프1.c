//#include <stdio.h>
//
//#define MAX_VERTICES 5
//int graph[MAX_VERTICES][MAX_VERTICES];
//
//// ���� �߰� �Լ�
//void addEdge(int u, int v) {
//    graph[u][v] = 1;
//    graph[v][u] = 1; // �������̹Ƿ� �����
//}
//
//// ���� ��� ��� �Լ�
//void printGraph() {
//    printf("���� ��� (Adjacency Matrix):\n");
//    for (int i = 0; i < MAX_VERTICES; i++) {
//        for (int j = 0; j < MAX_VERTICES; j++) {
//            printf("%d ", graph[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    // ���� 0~4�� ���� �߰�
//    addEdge(0, 1);
//    addEdge(0, 4);
//    addEdge(1, 2);
//    addEdge(1, 3);
//    addEdge(1, 4);
//    addEdge(2, 3);
//    addEdge(3, 4);
//
//    printGraph();
//    return 0;
//}
