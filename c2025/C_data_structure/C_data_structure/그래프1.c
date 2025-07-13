//#include <stdio.h>
//
//#define MAX_VERTICES 5
//int graph[MAX_VERTICES][MAX_VERTICES];
//
//// 간선 추가 함수
//void addEdge(int u, int v) {
//    graph[u][v] = 1;
//    graph[v][u] = 1; // 무방향이므로 양방향
//}
//
//// 인접 행렬 출력 함수
//void printGraph() {
//    printf("인접 행렬 (Adjacency Matrix):\n");
//    for (int i = 0; i < MAX_VERTICES; i++) {
//        for (int j = 0; j < MAX_VERTICES; j++) {
//            printf("%d ", graph[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    // 정점 0~4에 간선 추가
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
