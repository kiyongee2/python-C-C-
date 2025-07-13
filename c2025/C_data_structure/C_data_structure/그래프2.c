#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 5

// 연결 리스트 노드
typedef struct Node {
    int vertex;
    struct Node* next;
} Node;
  
// 그래프 구조
Node* adjList[MAX_VERTICES];

// 간선 추가 함수 (방향 그래프: u → v)
void addEdge(int u, int v) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = v;
    newNode->next = adjList[u];
    adjList[u] = newNode;
}

// 그래프 출력
void printGraph() {
    for (int i = 0; i < MAX_VERTICES; i++) {
        printf("정점 %d: ", i);
        Node* curr = adjList[i];
        while (curr != NULL) {
            printf("→ %d ", curr->vertex);
            curr = curr->next;
        }
        printf("\n");
    }
}

int main() {

    // 초기화
    for (int i = 0; i < MAX_VERTICES; i++) {
        adjList[i] = NULL;
    }

    // 간선 추가 (방향성 있음)
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(2, 3);
    addEdge(3, 4);

    printGraph();

    return 0;
}
