//#include <stdio.h>
//#define MAX 5
//
//int main() {
//    int n = 3; // 정점 수
//    int graph[MAX][MAX] = { 0 };
//
//    // 간선 추가 (A-B, B-C)
//    graph[0][1] = 1; // A-B
//    graph[1][0] = 1; // B-A (무방향)
//    graph[1][2] = 1; // B-C
//    graph[2][1] = 1; // C-B
//
//    // 출력
//    printf("인접 행렬:\n");
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++)
//            printf("%d ", graph[i][j]);
//        printf("\n");
//    }
//    return 0;
//}
