//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node {
//    int vertex;
//    struct Node* next;
//} Node;
//
//typedef struct Graph {
//    int numVertices;
//    Node** adjLists;
//} Graph;
//
//// 노드 생성
//Node* createNode(int v) {
//    Node* newNode = malloc(sizeof(Node));
//    newNode->vertex = v;
//    newNode->next = NULL;
//    return newNode;
//}
//
//// 그래프 생성
//Graph* createGraph(int vertices) {
//    Graph* graph = malloc(sizeof(Graph));
//    graph->numVertices = vertices;
//    graph->adjLists = malloc(vertices * sizeof(Node*));
// 
//    for (int i = 0; i < vertices; i++)
//        graph->adjLists[i] = NULL;
//
//    return graph;
//}
//
//// 간선 추가 (무방향)
//void addEdge(Graph* graph, int src, int dest) {
//    Node* newNode = createNode(dest);
//    newNode->next = graph->adjLists[src];
//    graph->adjLists[src] = newNode;
//
//    newNode = createNode(src);
//    newNode->next = graph->adjLists[dest];
//    graph->adjLists[dest] = newNode;
//}
//
//// 그래프 출력
//void printGraph(Graph* graph) {
//    for (int v = 0; v < graph->numVertices; v++) {
//        Node* temp = graph->adjLists[v];
//        printf("정점 %d: ", v);
//        while (temp) {
//            printf("%d -> ", temp->vertex);
//            temp = temp->next;
//        }
//        printf("NULL\n");
//    }
//}
//
//int main() {
//    Graph* g = createGraph(3);
//
//    addEdge(g, 0, 1); // A-B
//    addEdge(g, 1, 2); // B-C
//
//    printGraph(g);
//    return 0;
//}
