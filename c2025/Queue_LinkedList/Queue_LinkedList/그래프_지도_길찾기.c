#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define INF INT_MAX

// ---------------------------
// 그래프: 인접 리스트 (무방향, 가중치)
// ---------------------------
typedef struct Edge {
    int to;
    int weight;
    struct Edge* next;
} Edge;

typedef struct {
    int n;       // 정점 수 (0..n-1)
    Edge** heads;
} Graph;

Graph* createGraph(int n) {
    Graph* g = malloc(sizeof(Graph));
    g->n = n;
    g->heads = malloc(n * sizeof(Edge*));
    for (int i = 0; i < n; ++i) g->heads[i] = NULL;
    return g;
}

Edge* createEdge(int to, int weight, Edge* next) {
    Edge* e = malloc(sizeof(Edge));
    e->to = to;
    e->weight = weight;
    e->next = next;
    return e;
}

// 무방향 간선 추가
void addEdge(Graph* g, int a, int b, int w) {
    g->heads[a] = createEdge(b, w, g->heads[a]);
    g->heads[b] = createEdge(a, w, g->heads[b]);
}

// ---------------------------
// 최소 힙 (우선순위 큐) - d와 vertex 기준
// supports decrease-key via pos[]
// ---------------------------
typedef struct {
    int v;      // vertex
    int dist;   // current distance (key)
} HeapNode;

typedef struct {
    HeapNode* arr; // 1-indexed heap array
    int size;
    int capacity;
    int* pos;      // pos[v] = index_of_v_in_heap_array (or -1 if not present)
} MinHeap;

MinHeap* createMinHeap(int capacity) {
    MinHeap* h = malloc(sizeof(MinHeap));
    h->arr = malloc((capacity + 1) * sizeof(HeapNode));
    h->size = 0;
    h->capacity = capacity;
    h->pos = malloc(capacity * sizeof(int));
    for (int i = 0; i < capacity; ++i) h->pos[i] = -1;
    return h;
}

void swapHeapNodes(MinHeap* h, int i, int j) {
    HeapNode tmp = h->arr[i];
    h->arr[i] = h->arr[j];
    h->arr[j] = tmp;
    h->pos[h->arr[i].v] = i;
    h->pos[h->arr[j].v] = j;
}

void minHeapify(MinHeap* h, int idx) {
    int smallest = idx;
    int left = idx * 2;
    int right = idx * 2 + 1;
    if (left <= h->size && h->arr[left].dist < h->arr[smallest].dist) smallest = left;
    if (right <= h->size && h->arr[right].dist < h->arr[smallest].dist) smallest = right;
    if (smallest != idx) {
        swapHeapNodes(h, idx, smallest);
        minHeapify(h, smallest);
    }
}

bool isEmptyHeap(MinHeap* h) {
    return h->size == 0;
}

void insertHeap(MinHeap* h, int v, int dist) {
    if (h->size == h->capacity) return; // capacity guard
    h->size++;
    int i = h->size;
    h->arr[i].v = v;
    h->arr[i].dist = dist;
    h->pos[v] = i;
    // bubble up
    while (i > 1 && h->arr[i].dist < h->arr[i / 2].dist) {
        swapHeapNodes(h, i, i / 2);
        i = i / 2;
    }
}

// update key (decrease-key)
void decreaseKey(MinHeap* h, int v, int newDist) {
    int i = h->pos[v];
    if (i == -1) {
        // not in heap -> insert
        insertHeap(h, v, newDist);
        return;
    }
    if (h->arr[i].dist <= newDist) return;
    h->arr[i].dist = newDist;
    // bubble up
    while (i > 1 && h->arr[i].dist < h->arr[i / 2].dist) {
        swapHeapNodes(h, i, i / 2);
        i = i / 2;
    }
}

HeapNode extractMin(MinHeap* h) {
    HeapNode root = h->arr[1];
    HeapNode last = h->arr[h->size];
    h->arr[1] = last;
    h->pos[last.v] = 1;
    h->pos[root.v] = -1;
    h->size--;
    minHeapify(h, 1);
    return root;
}

// ---------------------------
// Dijkstra (경로 복원 포함)
// ---------------------------
void dijkstra(Graph* g, int src, int dest, int* out_dist, int** out_path, int* out_path_len) {
    int n = g->n;
    int* dist = malloc(n * sizeof(int));
    int* parent = malloc(n * sizeof(int));
    bool* visited = malloc(n * sizeof(bool));
    for (int i = 0; i < n; ++i) {
        dist[i] = INF;
        parent[i] = -1;
        visited[i] = false;
    }

    MinHeap* heap = createMinHeap(n);
    // insert all nodes with INF initially (or insert lazily; here we insert src only and use decreaseKey with insert)
    insertHeap(heap, src, 0);
    dist[src] = 0;
    parent[src] = -1;

    while (!isEmptyHeap(heap)) {
        HeapNode hn = extractMin(heap);
        int u = hn.v;
        if (visited[u]) continue;
        visited[u] = true;
        if (u == dest) break; // early stop if destination reached

        for (Edge* e = g->heads[u]; e != NULL; e = e->next) {
            int v = e->to;
            int w = e->weight;
            if (!visited[v] && dist[u] != INF && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                parent[v] = u;
                // decrease-key or insert
                decreaseKey(heap, v, dist[v]);
            }
        }
    }

    // 복원: dest까지 경로
    int path_cap = n;
    int* path = malloc(path_cap * sizeof(int));
    int path_len = 0;
    if (dist[dest] != INF) {
        int cur = dest;
        while (cur != -1) {
            path[path_len++] = cur;
            cur = parent[cur];
        }
        // reverse path
        for (int i = 0; i < path_len / 2; ++i) {
            int t = path[i];
            path[i] = path[path_len - 1 - i];
            path[path_len - 1 - i] = t;
        }
    }
    else {
        // no path found -> path_len remains 0
    }

    *out_dist = dist[dest];
    *out_path = path;       // caller should free
    *out_path_len = path_len;

    // cleanup
    free(dist);
    free(parent);
    free(visited);
    free(heap->arr);
    free(heap->pos);
    free(heap);
}

// ---------------------------
// 예제 및 실행
// ---------------------------
int main() {
    // 노드 수 (예: 6개 도시: 0..5)
    int n = 6;
    Graph* g = createGraph(n);

    // 예제 무방향 가중치 간선 (거리 단위)
    // (0) -1- (1)
    // (0) -2- (2)
    // (1) -3- (3)
    // (1) -2- (4)
    // (2) -4- (4)
    // (3) -6- (5)
    // (4) -1- (5)
    addEdge(g, 0, 1, 1);
    addEdge(g, 0, 2, 2);
    addEdge(g, 1, 3, 3);
    addEdge(g, 1, 4, 2);
    addEdge(g, 2, 4, 4);
    addEdge(g, 3, 5, 6);
    addEdge(g, 4, 5, 1);

    // (선택) 정점에 이름 매핑 (도시 이름 등)
    const char* names[] = { "A", "B", "C", "D", "E", "F" };

    int src = 0;   // 출발 A
    int dest = 5;  // 도착 F

    int dist;
    int* path;
    int path_len;
    dijkstra(g, src, dest, &dist, &path, &path_len);

    if (dist == INF || path_len == 0) {
        printf("경로 없음: %s -> %s\n", names[src], names[dest]);
    }
    else {
        printf("최단 거리: %s -> %s = %d\n", names[src], names[dest], dist);
        printf("경로: ");
        for (int i = 0; i < path_len; ++i) {
            printf("%s", names[path[i]]);
            if (i + 1 < path_len) printf(" -> ");
        }
        printf("\n");
    }

    // 메모리 해제 (간단하게 끝날 때만)
    free(path);
    // 해제: 그래프 에지들 (생략 가능하지만 원칙적으로 해제)
    for (int i = 0; i < n; ++i) {
        Edge* e = g->heads[i];
        while (e) {
            Edge* t = e;
            e = e->next;
            free(t);
        }
    }
    free(g->heads);
    free(g);

    return 0;
}
