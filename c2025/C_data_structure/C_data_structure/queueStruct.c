#include <stdio.h>
#include <stdbool.h> // bool 타입

#define QUEUE_SIZE 10

// 구조체 정의
typedef struct {
    int data[QUEUE_SIZE];
    int front;
    int rear;
} CircularQueue;

// 큐 초기화
void initQueue(CircularQueue* q) {
    q->front = 0;
    q->rear = 0;
}

// 큐가 비었는지 확인
bool isEmpty(CircularQueue* q) {
    return q->front == q->rear;
}

// 큐가 가득 찼는지 확인
bool isFull(CircularQueue* q) {
    return (q->rear + 1) % QUEUE_SIZE == q->front;
}

// 데이터 추가
void enQueue(CircularQueue* q, int value) {
    if (isFull(q)) {
        printf("큐가 가득 찼습니다!!\n");
        return;
    }
    q->data[q->rear] = value;
    q->rear = (q->rear + 1) % QUEUE_SIZE;
}

int deQueue(CircularQueue* q) { // 데이터 삭제
    if (isEmpty(q)) {
        printf("큐가 비었습니다!!\n");
        return -1; 
    }
    int value = q->data[q->front];
    q->front = (q->front + 1) % QUEUE_SIZE;
    return value;
}

void printQueue(CircularQueue* q) { // 큐 상태 출력
    printf("큐 상태: ");
    if (isEmpty(q)) {
        printf("(비어 있음)\n");
        return;
    }
    int i = q->front;
    while (i != q->rear) {
        printf("%d ", q->data[i]);
        i = (i + 1) % QUEUE_SIZE;
    }
    printf("\n");
}

int main() {

    CircularQueue q1, q2;

    // 큐 초기화
    initQueue(&q1);
    initQueue(&q2);

    printf("=== 큐 1에 데이터 넣기 ===\n");
    enQueue(&q1, 10);
    enQueue(&q1, 20);
    enQueue(&q1, 30);
    printQueue(&q1);

    printf("\n=== 큐 1에서 데이터 빼기 ===\n");
    printf("%d ", deQueue(&q1));
    printf("%d ", deQueue(&q1));
    printQueue(&q1);

    printf("\n=== 큐 2 테스트 ===\n");
    enQueue(&q2, 100);
    enQueue(&q2, 200);
    printQueue(&q2);

    return 0;
}
