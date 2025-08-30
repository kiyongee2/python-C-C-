//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <limits.h>
//#include <stdbool.h>
//
//#define MAX_STATIONS 500   // 충분히 큰 값으로 설정
//#define INF INT_MAX/2
//
//int travelTime[MAX_STATIONS][MAX_STATIONS];
//char stationNames[MAX_STATIONS][100];
//int stationCount = 0;
//
//// CSV 로딩 (스트링 단순 파싱 예시)
//void loadStationCodes(const char* filename) {
//    FILE* f = fopen(filename, "r");
//    if (!f) { perror("station_code.csv 열기 실패"); exit(1); }
//    char line[256];
//    while (fgets(line, sizeof(line), f)) {
//        // 예: "0,227,227,낙성대"
//        char* token = strtok(line, ",");
//        if (!token) continue;
//        int idx = atoi(token);
//        // skip next tokens as needed
//        for (int i = 0; i < 2; i++) token = strtok(NULL, ",");
//        token = strtok(NULL, "\n");  // 역 이름
//        if (!token) continue;
//        strcpy(stationNames[idx], token);
//        stationCount = max(stationCount, idx + 1);
//    }
//    fclose(f);
//}
//
//void loadTravelTime(const char* filename) {
//    FILE* f = fopen(filename, "r");
//    if (!f) { perror("travel_time_matrix.csv 열기 실패"); exit(1); }
//    for (int i = 0; i < stationCount; i++)
//        for (int j = 0; j < stationCount; j++)
//            travelTime[i][j] = INF;
//
//    char line[5000];
//    int i = 0;
//    while (fgets(line, sizeof(line), f) && i < stationCount) {
//        char* p = line;
//        for (int j = 0; j < stationCount; j++) {
//            int t = atoi(p);
//            travelTime[i][j] = t;
//            p = strchr(p, ',');
//            if (!p) break;
//            p++;
//        }
//        i++;
//    }
//    fclose(f);
//}
//
//// 이름 → 인덱스 매핑 (간단히 선형 탐색)
//int findStationByName(const char* name) {
//    for (int i = 0; i < stationCount; i++) {
//        if (strstr(stationNames[i], name)) return i;
//    }
//    return -1;
//}
//
//// 다익스트라 (인접 행렬, 단순 구현)
//void dijkstra(int src, int dest) {
//    int dist[stationCount], parent[stationCount];
//    bool used[stationCount];
//    for (int i = 0; i < stationCount; i++) {
//        dist[i] = INF;
//        parent[i] = -1;
//        used[i] = false;
//    }
//    dist[src] = 0;
//
//    for (int iter = 0; iter < stationCount; iter++) {
//        int u = -1;
//        for (int j = 0; j < stationCount; j++)
//            if (!used[j] && (u < 0 || dist[j] < dist[u])) u = j;
//        if (u < 0 || dist[u] == INF) break;
//        used[u] = true;
//        for (int v = 0; v < stationCount; v++) {
//            if (dist[u] + travelTime[u][v] < dist[v]) {
//                dist[v] = dist[u] + travelTime[u][v];
//                parent[v] = u;
//            }
//        }
//    }
//
//    if (dist[dest] >= INF) {
//        printf("연결 경로 없음\n");
//        return;
//    }
//    printf("최단 시간: %d분\n", dist[dest]);
//    // 경로 출력
//    int path[stationCount], len = 0, cur = dest;
//    while (cur != -1) path[len++] = cur, cur = parent[cur];
//    for (int k = len - 1; k >= 0; k--) {
//        printf("%s", stationNames[path[k]]);
//        if (k > 0) printf(" -> ");
//    }
//    printf("\n");
//}
//
//int main() {
//    loadStationCodes("station_code.csv");
//    loadTravelTime("travel_time_matrix.csv");
//
//    char start[100], end[100];
//    printf("출발역 입력: "); scanf("%s", start);
//    printf("도착역 입력: "); scanf("%s", end);
//
//    int s = findStationByName(start), d = findStationByName(end);
//    if (s < 0 || d < 0) {
//        printf("역 이름을 찾을 수 없음.\n");
//        return 1;
//    }
//    dijkstra(s, d);
//    return 0;
//}
