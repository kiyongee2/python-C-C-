//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <limits.h>
//#include <stdbool.h>
//
//#define N 7   // 역 개수 (강남~잠실 + 종로3가, 종로5가)
//#define INF 1000000
//
//// 역 이름 매핑
//const char* stations[N] = {
//    "강남(2호선)", "역삼(2호선)", "선릉(2호선)", "삼성(2호선)", "잠실(2호선)",
//    "종로3가(1호선)", "종로5가(1호선)"
//};
//
//// 지하철 그래프 (가중치: 이동 시간, INF = 연결 없음)
//int graph[N][N];
//
//// 다익스트라 알고리즘
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
//        if (u == -1) break; // 더 이상 갈 수 없음
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
//        printf("연결된 경로가 없습니다.\n");
//        return;
//    }
//
//    printf("\n최단 소요 시간: %d분\n", dist[end]);
//
//    // 경로 추적 (뒤에서 앞으로 따라감)
//    int path[N], count = 0, cur = end;
//    while (cur != -1) {
//        path[count++] = cur;
//        cur = parent[cur];
//    }
//
//    printf("경로: ");
//    for (int i = count - 1; i >= 0; i--) {
//        printf("%s", stations[path[i]]);
//        if (i > 0) printf(" -> ");
//    }
//    printf("\n");
//}
//
//// 역 이름으로 인덱스 찾기
//int findStationIndex(const char* name) {
//    for (int i = 0; i < N; i++) {
//        if (strstr(stations[i], name)) { // 부분 문자열 검색
//            return i;
//        }
//    }
//    return -1;
//}
//
//int main() {
//    // 그래프 초기화
//    for (int i = 0; i < N; i++)
//        for (int j = 0; j < N; j++)
//            graph[i][j] = (i == j) ? 0 : INF;
//
//    // 2호선
//    graph[0][1] = graph[1][0] = 2; // 강남-역삼
//    graph[1][2] = graph[2][1] = 2; // 역삼-선릉
//    graph[2][3] = graph[3][2] = 2; // 선릉-삼성
//    graph[3][4] = graph[4][3] = 5; // 삼성-잠실
//
//    // 1호선
//    graph[5][6] = graph[6][5] = 5; // 종로3가-종로5가
//
//    // 환승 (예시: 삼성-종로3가 직통 환승 15분)
//    graph[3][5] = graph[5][3] = 15;
//
//    char startName[50], endName[50];
//    printf("출발역 입력: ");
//    scanf("%s", startName);
//    printf("도착역 입력: ");
//    scanf("%s", endName);
//
//    int start = findStationIndex(startName);
//    int end = findStationIndex(endName);
//
//    if (start == -1 || end == -1) {
//        printf("입력한 역 이름을 찾을 수 없습니다.\n");
//        return 1;
//    }
//
//    dijkstra(start, end);
//
//    return 0;
//}
