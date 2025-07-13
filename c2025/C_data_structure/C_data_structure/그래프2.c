#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 5

// ���� ����Ʈ ���
typedef struct Node {
    int vertex;
    struct Node* next;
} Node;
  
// �׷��� ����
Node* adjList[MAX_VERTICES];

// ���� �߰� �Լ� (���� �׷���: u �� v)
void addEdge(int u, int v) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = v;
    newNode->next = adjList[u];
    adjList[u] = newNode;
}

// �׷��� ���
void printGraph() {
    for (int i = 0; i < MAX_VERTICES; i++) {
        printf("���� %d: ", i);
        Node* curr = adjList[i];
        while (curr != NULL) {
            printf("�� %d ", curr->vertex);
            curr = curr->next;
        }
        printf("\n");
    }
}

int main() {

    // �ʱ�ȭ
    for (int i = 0; i < MAX_VERTICES; i++) {
        adjList[i] = NULL;
    }

    // ���� �߰� (���⼺ ����)
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(2, 3);
    addEdge(3, 4);

    printGraph();

    return 0;
}
